Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page and all relevant fields.

  @api
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
    Given the following book data
      | field                                                | text      |
      | Title of the original text as it appeared originally | קהלת מוסר |
    When  I visit "books/der-prediger"
    Then  I should see the text of fields under the tab with name "Translation" and ID "translation"

  @api
  Scenario: Verify tabs & fields content on a book page
    Given the following book data
      | field                      | text                                                  |
      | Bibliographical citations  | המאסף תקמ"ח (אדר שני), דפוס חברת חינוך נערים, עמ' 37-35 |
      | Original language of text  | German                                                |
    When  I visit "books/מכתב"
    Then  I should see the text of fields under the tab with name "Translation" and ID "translation"

  @api
  Scenario: Verify tabs & fields content on a book page
    Given the following book data
      | field                      | text             |
      | Original publisher         | Schramm u. Frank |
    When  I visit "books/מציאת-הארץ-החדשה-א"
    Then  I should see the text of fields under the tab with name "Translation" and ID "translation"

  @api
  Scenario: Verify tabs & fields content on a book page
    Given the following book data
      | field                      | text             |
      | Other names for the author | משה מדעסויא      |
      | General notes              | לשונות סתומות     |
    When  I visit "books/פעדאן"
    Then  I should see the text of fields under the tab with name "Translation" and ID "translation"


  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                                   | text                  |
      | Type of new edition, as specified in the text           | first printing        |
      | References                                              | כך בעמוד השער ובהסכמות |
      | Notes                                                   | רשות להדפיס המחברת    |
      | Name of the old text as it appears in the book          | שערי נעימה             |
      | Name of the old text's author as it appears in the book | חלם, שלמה בן משה      |
      | Additional names for the old text's author as it appears in the book | שלמה בעל מרכבת המשנה |
    When  I visit "books/ספר-שערי-נעימה"
    Then  I should see the text of fields under the tab with name "New edition" and ID "new-edition"


  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                       | text                  |
      | Type of new edition, as specified elsewhere | edition               |
      | References                                  | סנדלר, הביאור לתורה    |
    When  I visit "books/לשון-הזהב"
    Then  I should see the text of fields under the tab with name "New edition" and ID "new-edition"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                       | text            |
      | Notes                                       | כפי שמציין יערי    |
      | General notes                               | הטקסט המקורי    |
    When  I visit "books/אהבת-ציון"
    Then  I should see the text of fields under the tab with name "New edition" and ID "new-edition"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                            | text                   |
      | Number of volumes published                      | 2                      |
      | Number of examined volume                        | 2                      |
      | Names of other published volumes                 | קורות שנות קדם - חלק א' |
      | Names of planned volumes that were not published | לא ידוע על ספרים נוספים   |
      | Part of a series of books                        | Yes                     |
      | Name of series                                   | קורות שנות קדם           |
      | Printed originally with other books              | Yes                     |
      | Names of other books                             | נכרך עם קורות שנות קדם   |
      | General notes                                    | יש לבדוק שוב             |
    When  I visit "books/קורות-שנות-קדם-ב"
    Then  I should see the text of fields under the tab with name "Volumes" and ID "volumes"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                                   | text               |
      | Name of publisher                                       | Friedrich Maurer   |
      | Year of publication as it appears in the book           | 1788               |
      | Hebrew year of publication as it appears in the book    | תקמט               |
      | Gregorian year of publication as it appears in the book | 1788               |
      | Place of publication as it appears in the book          | Berlin             |
      | Format of date                                          | modern             |
    When  I visit "books/der-prediger"
    Then  I should see the text of fields under the tab with name "Publisher/ Printing press " and ID "publisher-printing-press"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
    Then  I should see the text of field under the tab
      | field                                          | text               |
      | Price of book as it appears in the book        | ראו הערה במגלת רות |
    When  I visit "books/מגלת-קהלת"
    Then  I should see the text of fields under the tab with name "Publisher/ Printing press " and ID "publisher-printing-press"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
    Then  I should see the text of field under the tab
      | field                                                        | text               |
      | Year of publication as it appears in other sources           | תקס                |
      | Hebrew year of publication as it appears in other sources    | תקס                |
      | Gregorian year of publication as it appears in other sources | 1790               |
      | Place of publication as it appears in other sources          | Dyhernfurth        |
      | References                                                   | וינוגרד              |
      | Notes                                                        | יצאו רק שתי חוברות   |
    When  I visit "books/נתיב-לשון-עברית"
    Then  I should see the text of fields under the tab with name "Publisher/ Printing press" and ID "publisher-printing-press"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
    Then  I should see the text of field under the tab
      | field                                | text                    |
      | Total number of editions             | 3                       |
      | Last known edition                   | 1841                    |
      | References                           | Deutsch-jüdische Kinder |
      | Notes                                | מהדורות נוספות במקור      |
    When  I visit "books/israelitischer-kinderfreund-oder-handbuch-der-gemeinnützigsten-wissenschaftlichen-kenntnisse"
    Then  I should see the text of fields under the tab with name "Editions" and ID "editions"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
    Then  I should see the text of field under the tab
      | field                                 | text                    |
      | Year                                  | תקמ"ב                   |
      | City                                  | Vienna                  |
      | Changes in this edition               | מהדורת ורשה             |
      | References                            | בית עקד ספרים           |
      | Language                              | הולנדית                  |
      | Year                                  | 1783                    |
      | City                                  | Gorizia                 |
      | Translator                            | דוד פרידלנדר              |
      | References                            | Instruction salutaire   |
    When  I visit "books/דברי-שלום-ואמת-א"
    Then  I should see the text of fields under the tab with name "Editions" and ID "editions"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
    Then  I should see the text of field under the tab
      | field                                        | text                    |
      | Number of languages                          | monolingual             |
      | Languages in book                            | German                  |
      | Occasional words in other languages          | Hebrew                  |
      | Alignment of text                            | left                    |
      | Typography                                   | consecutive             |
      | Language of footnotes                        | German                  |
      | Location of footnotes                        | bottom of pages         |
      | Fonts                                        | Gothic                  |
      | Is there a preface                           | Yes                     |
      | Is there an epilogue                         | No                      |
      | Is there a table of contents                 | Yes                     |
      | Notes                                        | Abendgebet	305          |
      | Number of pages in the book                  |  478, [5]               |
      | Height of book, in cm                        | 19                      |
      | Width of book, in cm                         | 10                      |
      | Are there illustrations/diagrams?            | Yes                     |
      | Pages in which illustrations/diagrams appear | 2                       |
      | General notes                                | Seitenzahlen richtig:   |
    When  I visit "books/gebete-der-hochdeutschen-und-polnischen-juden"
    Then  I should see the text of fields under the tab with name "Book structure" and ID "book-structure"

  @api @wip
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

  @api @wip
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


  @api @wip
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

  @api @wip
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/דברי-שלום-ואמת-א"
    Then  I should see the text of field under the tab
    | tab      | text                             |
    | Editions | בית עקד ספרים                     |
    | Editions | במהדורת וינה צורף גם מאמר חקור דין. |
    | Editions | Translations |


  @api
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

  @api @wip
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/אגרת-ארחות-עולם"
    Then  I should see the text of field under the tab
    | tab                       | text                         |
    | Persons mentioned in book | People mentioned in the book |
    | Persons mentioned in book | יעקב בן יצחק פלעקלש          |

  @api @wip
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



