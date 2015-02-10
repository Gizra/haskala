Feature: Person
  In order to be able to view a person
  As an anonymous user
  We need to be able to have access to a person page

  @api
  Scenario Outline: Login to site, and check access to the person page.
    Given I am an anonymous user
    When  I visit "<title>" node of type "person"
    And   I should see the text "<text>"
    Then I should see the text "<title>" under "bread-crumbs"


  Examples:
    | title                                            | text                  |
    | Mendelssohn, Moses                               | Dessau                |
    | Friedländer, David                               | Königsberg            |
    | Lindau, Baruch ben Jehuda Löb                    | Hannover              |
