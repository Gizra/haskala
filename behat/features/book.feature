Feature: Book
  In order to be able to view a book
  As an anonymous user
  We need to be able to have access to a book page

  @api
  Scenario Outline: Visit a book page
    Given I am an anonymous user
    When  I visit "<title>" node of type "book"
    Then  I should see the text "<title>" under ".bread-crumbs"
    And   I should see the text "<text>"

  Examples:
    | title                  | text                                  |
    | ספר הגלוי והחתום          | מיקרופילם, נגטיב. לפי הטופס שבבריטיש מוזאום. |
    | ספר כרם עין גדי           | מטרת החיבור היא                        |
    | ספר אמרי בינה            | IUL בספריית אוניברסיטת תל אביב תחת סיגנטורה      |
    | מאמר צדק ועוני או עוז הצדק | שם המחבר כפי שמופיע אצל וינוגרד   |
    | בית הספר א              | למודי המישרים                   |
    | משא בערב               | מגן אברהם הלכות פורים            |
