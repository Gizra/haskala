Feature: Person
  In order to be able to view a person
  As an anonymous user
  We need to be able to have access to a person page

  @api
  Scenario Outline: Login to site, and check access to the person page.
    Given  I am an anonymous user
    When  I visit "<title>" node of type "person"
    Then  I should get a "200" HTTP response
    And   I should see the text "<text>"

  Examples:
    | title                                            | text                  |
    | Mendelssohn, Moses                               | Dessau                |
    | Friedländer, David                               | Königsberg            |
    | Lindau, Baruch ben Jehuda Löb                    | Hannover              |

  @api
  Scenario Outline: Verify breadcrumbs exist
    Given I am an anonymous user
    When  I visit "<title>" node of type "person"
    Then  I should see the link "<title>"

  Examples:
    | title          |
    | Satanow, Isaak |
    | חיאן, צדוק      |
