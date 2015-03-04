<?php

/**
 * Fetch people viaf IDs.
 *
 * @param int $start_nid
 */
function find_people_viaf_ids($start_nid = 0) {
  $query = db_select('node', 'n');
  $query->addField('n', 'nid');
  $query->addField('n', 'title');
  $query->condition('n.type', 'person');
  $query->condition('n.nid', $start_nid, '>');
  $query->range(0, 200);
  $people = $query->execute()->fetchAllAssoc('nid');

  foreach ($people as $person) {
    $name = $person->title;
    if (mb_strrchr($name, ' - ')) {
      list($name) = explode(' - ', $name);
    }
    $url = 'http://www.viaf.org/viaf/search?query=cql.any%20=%20%22' . urlencode($name) . '%22&maximumRecords=1&httpAccept=application/json';

    $result = file_get_contents($url);

    $matches = array();
    if (!preg_match('/viafID>\d+/', $result, $matches)) {
      $viaf_id = 'N/A';
      if (md5($result) != '12c4d4c674855ae8786e896002ca1c90') {
        dpm($result, $person->nid);
      }
    }
    else {
      $viaf_id = substr($matches[0], 7);
    }
    $wrapper = entity_metadata_wrapper('node', $person->nid);
    $wrapper->field_viaf_id->set($viaf_id);
    $wrapper->save();
    unset($wrapper);
  }
}

