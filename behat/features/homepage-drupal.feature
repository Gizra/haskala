Feature: HomePage Drupal
  In order to be able to view a homepage drupal
  As an anonymous user
  We need to be able to have access to a homepage drupal page

  @api @foo
  Scenario Outline: Visit a homepage drupal page
    Given I am an anonymous user
    When  I visit ""
    Then  I click "<link home page>"
    And   I should see the link "<link>"

  Examples:
    | link home page | link |
    | BOOKS          | A    |
    | Morals         | next |
    | Digital Books  | O    |
