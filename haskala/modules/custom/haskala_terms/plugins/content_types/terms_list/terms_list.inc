<?php

$plugin = array(
  'title' => t('Terms list'),
  'description' => t('Display a terms list starting from some letter.'),
  'category' => t('Haskala'),
  'hook theme' => 'haskala_terms_terms_list_content_type_theme',
  'required context' => new ctools_context_optional(t('Letter'), 'string'),
  'defaults' => array(
    'vocabulary' => 'Cities',
  ),
);

/**
 * Render callback.
 */
function haskala_terms_terms_list_content_type_render($subtype, $conf, $args, $context) {
  $variables = array();

  $argument = empty($context->data) ? 'A' : strtoupper($context->data);

  $vocab_name = $conf['vocabulary'];

  dpm($vocab_name);
  $vocabulary = taxonomy_vocabulary_machine_name_load($vocab_name);

  $vid = $vocabulary->vid;
  dpm($vid);


  // Get english alphabet.
  $letters_en = range('A', 'Z');

  // Get hebrew alphabet;
  $letters_he = haskala_book_hebrew_alphabet_without_sofit();

  $count = 0;
  $blocks = array();
  $limit = 50;

  // Get 50 nodes, starting from current letter. If there are less then 50
  // items - take nodes starting from next letter by alphabet and so on.
  do {
    $result = haskala_terms_get_terms_by_letter($argument, $limit, $vid);
    $count = $count + count($result);
    // Do not add empty result.
    if (!empty($result)) {
      $blocks[$argument] = $result;
    }

    if (in_array($argument, $letters_en)) {
      // Letter is english
      $key = array_search($argument, $letters_en);
      if ($key == count($letters_en) - 1) {
        // This is the last letter in the alphabet.
        break;
      }
      $argument = $letters_en[$key + 1];
    }
    else if (in_array($argument, $letters_he)) {
      // Letter is hebrew.
      $key = array_search($argument, $letters_he);
      if ($key == count($letters_he) - 1) {
        // This is the last letter in the alphabet.
        break;
      }
      $argument = $letters_he[$key + 1];
    }

    $limit -= count($result);

  } while ($count < 50);

  // Create formatted html of block of the nodes to display.
  $variables['books_blocks'] = '';
  foreach ($blocks as $letter => $block) {
    $block_vars = array();
    $block_vars['letter'] = $letter;
    $block_vars['class'] = in_array($letter, $letters_he) ? 'he' : 'en';
    $block_vars['books_list'] = '';
    foreach ($block as $term) {
      $view = taxonomy_term_view($term);
      $block_vars['books_list'] .= drupal_render($view);
    }
    $variables['books_blocks'] .= theme('letter_terms_list', $block_vars);
  }

  $block = new stdClass();
  $block->module = 'haskala_book';
  $block->content = theme('terms_list', $variables);

  return $block;
}

/**
 * Get limited count of nodes with titles starting from the certain letter.
 *
 * @param $letter
 *  String with the certain letter.
 * @param $limit
 *  Count of nodes, that should be loaded.
 * @param $vid
 *  Vocabulary id.
 *
 * @return array
 *  Array with taxonomy term objects.
 */
function haskala_terms_get_terms_by_letter($letter, $limit, $vid) {
  $query = new EntityFieldQuery();
  $query
    ->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $vid)
    ->propertyCondition('name', $letter, 'STARTS_WITH');

  if ($limit != 50) {
    // Could be that for some letter there are more than 50 items. In this case
    // if this is the first requested letter we should load all of them.
    $query->range(0, $limit);
  }

  $result = $query->execute();
  $terms = !empty($result) ? taxonomy_term_load_multiple(array_keys($result['taxonomy_term'])) : array();

  return $terms;
}

/**
 * The form to add or edit a node as content.
 */
function haskala_terms_terms_list_content_type_edit_form($form, &$form_state) {
  $names = array();

  $vocabularies = taxonomy_vocabulary_get_names();
  foreach ($vocabularies as $vocabulary) {
    $names[$vocabulary->machine_name] = $vocabulary->machine_name;
  }
  $form['vocabulary'] = array(
    '#type' => 'select',
    '#title' => t('Vocabulary'),
    '#options' => $names,
    '#default_value' => $form_state['conf']['vocabulary'],
  );

  return $form;
}


/**
 * Submit handler;
 */
function haskala_terms_terms_list_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (array_keys($form_state['values']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}


/**
 * Delegated hook_theme().
 */
function haskala_terms_terms_list_content_type_theme(&$theme, $plugin) {
  $theme['terms_list'] = array(
    'template' => 'terms_list',
    'path' => $plugin['path'],
    'variables' => array(
      'list' => NULL,
      'terms_blocks' => NULL,
    ),
  );
  $theme['letter_terms_list'] = array(
    'template' => 'letter_terms_list',
    'path' => $plugin['path'],
    'variables' => array(
      'letter' => NULL,
      'terms_list' => NULL,
    ),
  );
}
