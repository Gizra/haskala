Feature: HomePage Drupal
  In order to be able to view a homepage drupal
  As an anonymous user
  We need to be able to have access to a homepage drupal page

  @api
  Scenario Outline: Visit a homepage drupal page
    Given I am an anonymous user
    When  I visit "/"
    Then  I click "<on the link>"
    And   I should see the link "<link>"

  Examples:
    | on the link    | link         |
    | Books          | A            |
    | Morals         | Der Prediger |
    | Digital Books  | O            |
