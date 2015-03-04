Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page.

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/זה-ספר-בית-המדות"
    Then  I should see the text under the tab
    | tab                         | text                                       |
    | Book producers              | מרגליות, יהודה ליב בן אשר                  |
    | Book structure              | על חלק דברי המוסר                          |
    | Textual models              | מרגליות                                    |
    | Publisher/ Printing press   | Place of publication as it appears in      |
    | Persons mentioned in book   | שיחיו ליום הולדתו בשנת                     |
    | Topics                      | Topic                                      |
    | Target audience             | Target audience as described in the book   |
    | Catalog numbers             | University catalog                         |
    | References and bibliography | לאומית                                     |

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
    Then  I should see the text under the tab
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
    Then  I should see the text under the tab
    | tab      | text                                |
    | Editions | בית עקד ספרים                       |
    | Editions | במהדורת וינה צורף גם מאמר חקור דין. |


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

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/אגרת-ארחות-עולם"
    Then  I should see the text under the tab
    | tab                       | text                         |
    | Persons mentioned in book | People mentioned in the book |
    | Persons mentioned in book | יעקב בן יצחק פלעקלש          |

  @api
  Scenario: Verify tabs content on a book page
    Given I am an anonymous user
    When  I visit "books/abhandlung-von-der-freiheit-des-menschen"
    Then  I should see the text under the tab
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

