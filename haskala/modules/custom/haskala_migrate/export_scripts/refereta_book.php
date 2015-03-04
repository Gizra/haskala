<?php


function export_referata_books_textual_models() {
  $path = drupal_get_path('module', 'haskala_migrate') . '/export_scripts/';
  $xml_file = $path . 'haskala_books.xml';
  $books_xml = new SimpleXMLElement(file_get_contents($xml_file));

  $books = array();
  /** @var SimpleXMLElement $book_xml */
  foreach ($books_xml->Category->Page as $book_xml) {
    $book = array(
      'Title' => (string)$book_xml->attributes()->Title,
      'Main models' => NULL,
      'Secondary models' => NULL,
    );

    foreach ($book_xml->Template as $template) {
      if ((string)$template->attributes()->Name != 'Textual models') {
        continue;
      }

      foreach ($template->Field as $field) {
        $book[(string)$field->attributes()->Name] = (string)$field;
      }
    }
    $books[(string)$book_xml->attributes()->Title] = $book;
  }
  ksort($books);
  $file = fopen($path . 'textual_models.csv', 'w');
  foreach ($books as $book) {
    fputcsv($file, $book, ',');
  }
  fclose($file);
}