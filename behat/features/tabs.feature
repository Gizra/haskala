Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page.

  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/זה-ספר-בית-המדות"
    Then  I should see the text "<tab>"
    And   I should see the text "<text>"

  Examples:
    | tab                         | text                                       |
    | Book producers              | מרגליות, יהודה ליב בן אשר                  |
    | Book structure              | על חלק דברי המוסר                          |
    | Textual models              | מרגליות                                    |
    | Type of book                | Title of the book in Latin characters      |
    | Publisher/ Printing press   | Place of publication as it appears in      |
    | Persons mentioned in book   | שיחיו ליום הולדתו בשנת                     |
    | Topics                      | Topic                                      |
    | Target audience             | Target audience as described in the book   |
    | Catalog numbers             | University catalog                         |
    | References and bibliography | לאומית                                     |


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
    Then  I should see the text "<tab>"
    And   I should see the text "<text>"

  Examples:
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
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/דברי-שלום-ואמת-א-איטלקית"
    Then  I should see the text "<tab>"
    And   I should see the text "<text>"

  Examples:
    | tab          | text                                 |
    | Translation  | וייזל, נפתלי הרץ,Wessely, Hartwig    |
    | Translation  | 1783                                 |
    | Type of book | דברי שלום ואמת א                     |
    | Type of book | Wessely, Hartwig - וייזל, נפתלי הרץ  |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/דברי-שלום-ואמת-א"
    Then  I should see the text "<tab>"
    And   I should see the text "<text>"

  Examples:
    | tab      | text           |
    | Editions | בית עקד ספרים  |
    | Editions | אליהו מורפורגו |


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


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/אגרת-ארחות-עולם"
    Then  I should see the text "<tab>"
    And   I should see the text "<text>"

  Examples:
    | tab                       | text                         |
    | Persons mentioned in book | People mentioned in the book |
    | Persons mentioned in book | יעקב בן יצחק פלעקלש          |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/abhandlung-von-der-freiheit-des-menschen"
    Then  I should see the text "<tab>"
    And   I should see the text "<text>"

  Examples:
    | tab             | text                 |
    | Catalog numbers | Link to digital book |
    | Prefaces        | Writer of preface    |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    When  I visit "books/abhandlung-von-der-freiheit-des-menschen"
    And   I click "<link>"
    Then  I should get a "200" HTTP response

  Examples:
    | link                                                                                |
    | http://www.mdz-nbn-resolving.de/urn/resolver.pl?urn=urn%3Anbn%3Ade%3Abvb%3A12-bs... |

