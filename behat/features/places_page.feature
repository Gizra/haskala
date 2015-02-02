Feature: Places page
  As an anonymous user
  We need to be able to see the places list starting from chosen letter.

  @api
  Scenario Outline: Visit a places page
    Given I am an anonymous user
    And   I visit "places"
    When  I click "<letter>"
    Then  I should see the link "<link>"

  Examples:
    | letter | link         |
    | A      | Altona       |
    | G      | Glogau       |
    | א      | אבערראבבינער |
    | מ      | מיץ          |
    | ש      | שערשאווי     |
