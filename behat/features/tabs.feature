Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page.

  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    And   I visit "books/זה-ספר-בית-המדות"
    When  I should see the text "<tab>"
    Then  I should see the text "<text>"
    And   I click "<link>"
    And   I should get a "200" HTTP response

  Examples:
    | tab                         | text                                  | link        |
    | Book producers              | מרגליות, יהודה ליב בן אשר                 |  Author     |
    | Book structure              | על חלק דברי המוסר                       | monolingual |
    | Textual models              | מרגליות                                 |             |
    | Type of book                | Title of the book in Latin characters |             |
    | Publisher/ Printing press   | Place of publication as it appears in | Dyhernfurth |
    | Persons mentioned in book   | שיחיו ליום הולדתו בשנת                     |            |
    | Topics                      | Topic                                 | Religious beliefs |
    | Target audience             | Target audience as described in the book | maskilim          |
    | Catalog numbers             | University catalog                    |                   |
    | References and bibliography | לאומית                                  |                  |

  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    And   I visit "books/ספר-מנחה-חדשה-ד"
    When  I should see the text "<tab>"
    Then  I should see the text "<text>"
    And   I click "<link>"
    And   I should get a "200" HTTP response

  Examples:
    | tab      | text     | link          |
    | Volumes  | אך המספור |  ספר מנחה חדשה |
    | Prefaces | מבוא      |               |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    And   I visit "books/דברי-שלום-ואמת-א-איטלקית"
    When  I should see the text "<tab>"
    Then  I should see the text "<text>"

  Examples:
    | tab         | text     | link
    | Translation | וייזל, נפתלי הרץ,Wessely, Hartwig | Gorizia |
    | Type of book | דברי שלום ואמת א                |         |
    | Type of book | Wessely, Hartwig - וייזל, נפתלי הרץ |         |


  @api
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    And   I visit "books/דברי-שלום-ואמת-א"
    When  I should see the text "<tab>"
    Then  I should see the text "<text>"
    And   I click "<link>"
    And   I should get a "200" HTTP response

  Examples:
    | tab         | text     | link          |
    | Editions | בית עקד ספרים | Vienna        |
