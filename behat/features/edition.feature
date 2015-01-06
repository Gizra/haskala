Feature: Edition
  In order to be able to view a edition
  As an anonymous user
  We need to be able to have access to a edition page

  @api
  Scenario Outline: Login to site, and check access to the edition page.
    Given  I am an anonymous user
    When  I visit "<title>" node of type "edition"
    Then  I should get a "200" HTTP response
    And   I should see the text "<text>"

  Examples:
    | title             | text
    | תורת לשון עברית ב    | מהדורה שלישית ומתוקנת מאת וואלף מאיר, מורה לעברית ולתורה בביה"ס היהודי-גרמני בפראג |
    | משא בערב           | קלוזנר, וינוגרד                                                           |
    | בית הספר א         | [שכתוב והרחבה ישראל                                                     |
    | אגדת ארבע כוסות     | בעריכת דוד סלוצקי וי"ד טומפאווסקי                                            |
    | ספר נתיבות השלום א  | Publisher: A. Schmidt                                                  |
