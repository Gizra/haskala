Feature: User login
  In order to be able to be recognized by the site
  As an anonymous user
  We need to be able to login to the site

  @api
  Scenario Outline: Login to site, and check access to the book page.
    Given  I am an anonymous user
    When   I visit "<url>"
    Then   I should get a "200" HTTP response
    And    I should be on a page titled "<title>"

  Examples:
    | url                  | title                   |
    | content/מודע-לילדי-בני-ישראל                       | מודע לילדי בני ישראל \| Haskala                   |
    | content/ספר-הגלוי-והחתום                          | ספר הגלוי והחתום \| Haskala                   |
    | content/אורה-ושמחה                              | אורה ושמחה \| Haskala                   |
    | content/תוכחת-מגולה                              | תוכחת מגולה \| Haskala                   |
    | content/ספר-נתיבות-השלום-ד                       | ספר נתיבות השלום ד \| Haskala                   |



