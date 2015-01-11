Feature: Book translation
  In order to be able to view a book translation
  As an anonymous user
  We need to be able to have access to a book translation page

  @api
  Scenario Outline: Login to site, and check access to the book translation page.
    Given I am an anonymous user
    When  I visit "<title>" node of type "book_translation"
    Then  I should get a "200" HTTP response
    And   I should see the text "<text>"

  Examples:
    | title         | text                                                              |
    | זה ספר זכר צדיק | Aus dem Leben Wessely's                                            |
    | מלוכת שאול      | יידיש |
    | ספר מלחמה בשלום | תרגום ליידיש: גדולת יוסף (זכה למהדורות רבות)                              |
    | הנפש           | מהדורת ברין                        |
    | בית הספר א      | 1873                                                              |
