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
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/abhandlung-von-der-freiheit-des-menschen"
    And   I click "<link>"
    Then  I should get a "200" HTTP response

  Examples:
    | link                                                                                |
    | http://www.mdz-nbn-resolving.de/urn/resolver.pl?urn=urn%3Anbn%3Ade%3Abvb%3A12-bs... |



