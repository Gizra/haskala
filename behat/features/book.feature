Feature: Book
  In order to be able to view a book
  As an anonymous user
  We need to be able to have access to a book page

  @api
  Scenario Outline: Visit a book page
    Given I am an anonymous user
    When  I visit "<title>" node of type "book"
    Then  I should get a "200" HTTP response
    And   I should see the text "<text>"

  Examples:
    | title                  | text                                                  |
    | ספר הגלוי והחתום          | מיקרופילם, נגטיב. לפי הטופס שבבריטיש מוזאום.                 |
    | ספר כרם עין גדי           | תל אביב: 296.313 הור - אוסף יפה                         |
    | ספר אמרי בינה            | ורשומות ההערות הבאות:                                   |
    | מאמר צדק ועוני או עוז הצדק | שם המחבר כפי שמופיע אצל וינוגרד: ברזה, מנחם מנדל בן יהודה ליב. |
    | בית הספר א              | Bibliography of the Hebrew Book                      |
