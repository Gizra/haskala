Feature: People page
  As an anonymous user
  We need to be able to see the people list starting from chosen letter.

  @api @foo
  Scenario Outline: Visit a people page
    Given I am an anonymous user
    And   I visit "people"
    When  I click "<letter>"
    Then  I should see the link "<link>"

  Examples:
    | letter | link              |
    | A      | Abraham Isaak     |
    | G      | Gallathea Salomon |
    | א      | אלכסנדר, לוי      |
    | מ      | מאיר ארנשטיין      |
    | ת      | תמה, מרדכי       |
