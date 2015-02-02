Feature: Books page
  As an anonymous user
  We need to be able to see the books list starting from chosen letter.

  @api @foo
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    And   I visit "books"
    When  I click "<letter>"
    Then  I should see the link "<link>"

  Examples:
    | letter | link                                                      |
    | A      | An das Breslauer Publikum                                 |
    | G      | Gründlicher Unterricht in der Jüdischdeutschen Schreibart |
    | א      | אבטליון                                                    |
    | מ      | מאמר אמרה צרופה                                          |
    | ת      | תבנית חברת שוחרי הטוב והתושיה                              |

  @api @foo
  Scenario Outline: Visit a digital-books page
    Given I am an anonymous user
    And   I visit "digital-books"
    When  I click "<letter>"
    Then  I should see the link "<link>"

  Examples:
    | letter | link                                                                                  |
    | A      | Abhandlung von der Freiheit des Menschen                                              |
    | G      | Geschichte der Juden von ihrer Rückkehr aus der babylonischen Gefangenschaft bis zur  |
    | א      | אבל יחיד                                                                              |
    | מ      | מבוא הלשון                                                                            |
    | ת      | תהלה ותודה                                                                            |
