Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page and all relevant fields.

  @api
  Scenario: Verify content in the "Type of book" section on a book page
    Given the following book data
      | field                                                        | text                                  |
      | Full title of book                                           | אויף פוליש טייטש גשריבן                  |
      | Title of the book in Latin characters                        | Sefer refuʼot ha-nikra ʻEzer Yisraʼel |
      | Text is presented as original                                | Yes                                   |
      | Is there information to contradict this                      | Yes                                   |
      | References                                                   | שמרוק, משה מרקוזה                     |
    When  I visit "books/ספר-רפואות-הנקרא-עזר-ישראל"
    Then  I should see the text of fields under the tab with name "Type of book" and ID "top-details"

  @api
  Scenario: Verify content in the "Type of book" section on a book page
    Given the following book data
      | field                                       | text                                |
      | Notes                                       | כפי שמציין זאת בפרוש                  |
      | Expanded in translations                    | Yes                                 |
      | Expanded in new edition                     | Yes                                 |
    When  I visit "books/מאמר-מגיד-חדשות"
    Then  I should see the text of fields under the tab with name "Type of book" and ID "top-details"

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
    Then  I should see the text of fields under the tab with name "Publisher/ Printing press" and ID "publisher-printing-press"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                          | text               |
      | Price of book as it appears in the book        | ראו הערה במגלת רות |
    When  I visit "books/מגלת-קהלת"
    Then  I should see the text of fields under the tab with name "Publisher/ Printing press" and ID "publisher-printing-press"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
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
      | Notes                                        | Versöhnungstagesgebete  |
      | Number of pages in the book                  |  478, [5]               |
      | Height of book, in cm                        | 19                      |
      | Width of book, in cm                         | 10                      |
      | Are there illustrations/diagrams?            | Yes                     |
      | Pages in which illustrations/diagrams appear | 2                       |
      | General notes                                | Seitenzahlen richtig:   |
    When  I visit "books/gebete-der-hochdeutschen-und-polnischen-juden"
    Then  I should see the text of fields under the tab with name "Book structure" and ID "book-structure"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                        | text                    |
      | Number                                       | 2                       |
      | Writer of preface                            | משה זאללשין              |
      | Role in book production                      | author                   |
      | Preface title                                | מתאר את מערכת השמש שלנו |
      | Notes                                        | מחבר-שותף                |
    When  I visit "books/ספר-עמוד-השחר"
    Then  I should see the text of fields under the tab with name "Prefaces" and ID "prefaces"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                  | text                                                                                                                               |
      | Copy of book used      | UB Rostock: CIc-377                                                                                                                |
      | Studies about the book | Wohlwill, Immanuel: Über den Zustand der Jacobsonsschule in Seesen während der letzten drei Jahre, in:AZJ, Jg. 1847, Heft 1, S. 13 |
      | Notes                  | Angaben nach erster Sichtung in UB Rostock                                                                                         |
    When  I visit "books/zaphnath-paneach-oder-sammlung-moralischer-lehren-sprüche-erzählungen-und-gedichte-aus-dem"
    Then  I should see the text of fields under the tab with name "References and bibliography" and ID "references-and-bibliography"


  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                       | text                                                                                                                |
      | National Library of Israel  | 13901 V 25                                                                                                          |
      | Bar-Ilan University Library | B43 בן-זאב.או תקס"ז                                                                                                   |
      | Tel-Aviv University Library | CR 492.42 בן-ז                                                                                                     |
      | General notes               | בבר אילן ראיתי חלק א' וב' בנפרד, וכרך משותף לשלושת החלקים. בלאומית יש שלושה כרכים נפרדים. כלומר, הספר יצא במקור בשלושה כרכים נפרדים. |
    When  I visit "books/אוצר-השרשים-א"
    Then  I should see the text of fields under the tab with name "Catalog numbers" and ID "catalog-numbers"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                        | text                     |
      | Are there personal addresses                 | No                       |
      | Are there rabbinical approbations            | No                       |
      | Are there recommendations                    | No                       |
      | Are there dedications                        | Yes                      |
      | Notes                                        | [1770-1838]              |
      | Are there thanks                             | No                       |
      | Is there an appeal to sell subscriptions     | Yes                      |
      | Is there a list of subscribers               | Yes                      |
      | Is there a list of printers                  | No                       |
      | Is there a list of proofreaders              | No                       |
      | Is there a list of the book's funders        | No                       |
      | General notes                                | Studiosus Theodor in Kbg |
      | Hebrew name                                  | Friedländer, Rebekka Meyer |
      | German name                                  | Abrahamsen, Moses Levin    |
      | Description                                  | Subscriber                 |
      | Location city                                | Halle                      |
    When  I visit "books/gebete-der-hochdeutschen-und-polnischen-juden"
    Then  I should see the text of fields under the tab with name "Persons mentioned in book" and ID "persons-mentioned-in-book"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                        | text               |
      | Is there a list of the book's sellers        | No                 |
    When  I visit "books/der-prediger"
    Then  I should see the text of fields under the tab with name "Persons mentioned in book" and ID "persons-mentioned-in-book"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                        | text                 |
      | Main textual models of the book              | Textbook             |
      | Secondary textual models                     | Poems                |
      | Notes                                        | שיר מליצי פרי עטו      |
    When  I visit "books/תורת-לשון-עברית-א"
    Then  I should see the text of fields under the tab with name "Textual models" and ID "textual-models"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field             | text                  |
      | Topics            | Bible         |
      | Notes             | דקדוק, טעמים.          |
    When  I visit "books/ספר-שערי-נעימה"
    Then  I should see the text of fields under the tab with name "Topics" and ID "topics"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                     | text                       |
      | Target audience as described in the book  | maskilim                   |
      | Notes on target audience                  | יהודים היושבים במדינות אחרות   |
      | Evidence about book production            | שיקבענה בדפוס               |
      | Contacts with other people                | מדובר במשה אנסהיים          |
    When  I visit "books/פעדאן"
    Then  I should see the text of fields under the tab with name "Target audience" and ID "target-audience"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                     | text                       |
      | Contacts with official agents             | Studien-Hof-Kommission     |
      | Later references to the book              | Ohne Bewilligung           |
      | Mentions in reviews                       | Naftali Herz Hombergs      |
    When  I visit "books/bne-zion"
    Then  I should see the text of fields under the tab with name "Target audience" and ID "target-audience"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                     | text                       |
      | Contemporary references to the book       | כתב יושר                    |
      | Contemporary disputes about the book      | למשל אוגוסט קראנץ           |
      | Bans                                      | למאבקו בוייזל                |
    When  I visit "books/דברי-שלום-ואמת-א"
    Then  I should see the text of fields under the tab with name "Target audience" and ID "target-audience"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                  | text                       |
      | Censorship             | Bewilligung der K          |
    When  I visit "books/salomo-und-joseph-ii"
    Then  I should see the text of fields under the tab with name "Target audience" and ID "target-audience"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                               | text                       |
      | Original sources which mention the book             | Rezension in Sulamith      |
      | General notes                                       | Letteren zu drucken        |
    When  I visit "books/geschichte-der-juden-von-ihrer-rückkehr-aus-der-babylonischen-gefangenschaft-bis-zur"
    Then  I should see the text of fields under the tab with name "Target audience" and ID "target-audience"

  @api
  Scenario: Verify tabs & fields content on a book pageVerify tabs content on a book page
    Given the following book data
      | field                                               | text                       |
      | Partial publication of the book in other texts      | ללמד בני ישראל              |
    When  I visit "books/בית-הספר-א"
    Then  I should see the text of fields under the tab with name "Target audience" and ID "target-audience"

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



