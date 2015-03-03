Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page and all relevant fields.

  @api @foo
  Scenario: Verify tabs & fields content on a book page
    Given the following book data
      | field                                                                      | text                                                    |
      | Type of translation                                                        | translation of contemporary text, or of adjacent period |
      | Type of original text                                                      | book                                                    |
      | Title of the original text as it appears elsewhere                         | A view of Sir Isaac Newton's Philosophy                 |
      | References for title of the original text as it appears elsewhere          | KVK                                                     |
      | Year of publication of original text                                       | 1728                                                    |
      | Place of publication of original text                                      | London                                                  |
      | Name of author of the original text as it appeared originally              | Dr. Pemberton                                           |
      | Name of author of the original text as it appears elsewhere                | Pemberton, Henry                                        |
      | References for name of author of the original text as it appears elsewhere | KVK                                                     |
    When  I visit "books/anfangsgründe-der-newtonischen-philosophie"
    Then  I should see the text of fields under the tab with name "Translation" and ID "translation"


  @api
  Scenario: Verify tabs & fields content on a book page
    Given I am an anonymous user
    When  I visit "books/der-prediger"
    Then  I should see the text of field under the tab
      | tab                 | field                                                | text      |
      | Translation         | Title of the original text as it appeared originally | קהלת מוסר |

  @api
  Scenario: Verify tabs & fields content on a book page
    Given I am an anonymous user
    When  I visit "books/מכתב"
    Then  I should see the text of field under the tab
      | tab                 | field                      | text                                                  |
      | Translation         | Bibliographical citations  | המאסף תקמ"ח (אדר שני), דפוס חברת חינוך נערים, עמ' 37-35 |
      | Translation         | Original language of texts | German                                                |

  @api
  Scenario: Verify tabs & fields content on a book page
    Given I am an anonymous user
    When  I visit "books/מציאת הארץ החדשה א"
    Then  I should see the text of field under the tab
      | tab                 | field                      | text             |
      | Translation         | Original publisher         | Schramm u. Frank |

  @api
  Scenario: Verify tabs & fields content on a book page
    Given I am an anonymous user
    When  I visit "books/פעדאן"
    Then  I should see the text of field under the tab
      | tab                 | field                      | text             |
      | Translation         | Other names for the author | משה מדעסויא      |
      | Translation         | General notes              | לשונות סתומות     |

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/ספר שערי נעימה"
    Then  I should see the text of field under the tab
      | tab              | field                                                   | text                  |
      | New edition      | Type of new edition, as specified in the text           | first printing        |
      | New edition      | References                                              | כך בעמוד השער ובהסכמות |
      | New edition      | Notes                                                   | רשות להדפיס המחברת    |
      | New edition      | Name of the old text as it appears in the book          | שערי נעימה             |
      | New edition      | Name of the old text's author as it appears in the book | חלם, שלמה בן משה      |
      | New edition      | Additional names for the old text's author as it appears in the book | שלמה בעל מרכבת המשנה |

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/לשון-הזהב"
    Then  I should see the text of field under the tab
      | tab              | field                                       | text                  |
      | New edition      | Type of new edition, as specified elsewhere | edition               |
      | New edition      | References                                  | סנדלר, הביאור לתורה    |

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/אהבת-ציון"
    Then  I should see the text of field under the tab
      | tab              | field                                       | text            |
      | New edition      | Notes                                       | כפי שמציין יערי    |
      | New edition      | General notes                               | הטקסט המקורי    |

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/מגלת-קהלת"
    Then  I should see the text of field under the tab
      | tab                       | field                                          | text                         |
      | Publisher/ Printing press |                      |Price of book as it appears in the book |

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/זה-ספר-בית-המדות"
    Then  I should see the text of field under the tab
    | tab                         | field               | text                                       |
    | Book producers              |                     | מרגליות, יהודה ליב בן אשר                  |
    | Book structure              |                     | על חלק דברי המוסר                          |
    | Textual models              |                     | מרגליות                                    |
    | Publisher/ Printing press   |                     | Place of publication as it appears in      |
    | Persons mentioned in book   |                     | שיחיו ליום הולדתו בשנת                     |
    | Topics                      |                     | Topic                                      |
    | Target audience             |                     | Target audience as described in the book   |
    | Catalog numbers             |                     | University catalog                         |
    | References and bibliography |                     | לאומית                                     |

  @api
  Scenario: Verify content in the "Type of book" section
    Given I am an anonymous user
    When  I visit "books/זה-ספר-בית-המדות"
    Then  I should see the text "Zeh Sefer bet ha-midot" under "#top-details"

  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/זה-ספר-בית-המדות"
    And   I click "<link>"
    Then  I should get a "200" HTTP response

  Examples:
    | link              |
    | Author            |
    | monolingual       |
    | Dyhernfurth       |
    | Religious beliefs |
    | maskilim          |


  @api @fooy
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/ספר-מנחה-חדשה-ד"
    Then  I should see the text of field under the tab
    | tab      | text      |
    | Volumes  | אך המספור |
    | Prefaces | מבוא      |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/ספר-מנחה-חדשה-ד"
    And   I click "<link>"
    Then  I should get a "200" HTTP response

  Examples:
    | link            |
    | ספר מנחה חדשה   |

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/דברי-שלום-ואמת-א"
    Then  I should see the text of field under the tab
    | tab      | text                             |
    | Editions | בית עקד ספרים                     |
    | Editions | במהדורת וינה צורף גם מאמר חקור דין. |
    | Editions | Translations |


  @api @wip
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/דברי-שלום-ואמת-א"
    And   I click "<link>"
    Then  I should get a "200" HTTP response

  Examples:
    | link          |
    | Vienna        |
    | איטלקית       |
    | דוד פרידלנדר    |

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/אגרת-ארחות-עולם"
    Then  I should see the text of field under the tab
    | tab                       | text                         |
    | Persons mentioned in book | People mentioned in the book |
    | Persons mentioned in book | יעקב בן יצחק פלעקלש          |

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/abhandlung-von-der-freiheit-des-menschen"
    Then  I should see the text of field under the tab
    | tab                         | text                                       |
    | Catalog numbers             | Link to digital book                       |
    | Prefaces                    | Writer of preface                          |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/abhandlung-von-der-freiheit-des-menschen"
    And   I click "<link>"
    Then  I should get a "200" HTTP response

  Examples:
    | link                                                                                |
    | http://www.mdz-nbn-resolving.de/urn/resolver.pl?urn=urn%3Anbn%3Ade%3Abvb%3A12-bs... |



