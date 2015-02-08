Feature: Book page
  As an anonymous user
  We need to be able to see the tabs list in the book page.

  @api @foo
  Scenario Outline: Visit a books page
    Given I am an anonymous user
    And   I visit "books/זה-ספר-בית-המדות"
    When  I should see the text "<tab>"
    Then  I should see the text "<text>"
    And   I click "<link>"
    And   I should get a "200" HTTP response

  Examples:
    | tab            | text                              | link        |
    | Book producers | מרגליות, יהודה ליב בן אשר |  Author      |
    | Book structure | על חלק דברי המוסר                  | monolingual |
    | Textual models | מרגליות                             |             |