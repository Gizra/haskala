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

  $vocabulary = taxonomy_vocabulary_machine_name_load($vocab_name);

  $vid = $vocabulary->vid;

  $options = array(
    'term' => array(
      'vid' => $vid
    )
  );

  // Create formatted html of block of the terms to display.
  $variables['terms_blocks'] = haskala_general_build_items_list('term', $options, $argument);

  $block = new stdClass();
  $block->module = 'haskala_terms';
  $block->content = theme('terms_list', $variables);

  return $block;
}

/**
 * Get limited count of terms with titles starting from the certain letter.
 *
 * @param $letter
 *  String with the certain letter.
 * @param $limit
 *  Count of terms, that should be loaded.
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
