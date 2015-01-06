Feature: User login
  In order to be able to be recognized by the site
  As an anonymous user
  We need to be able to login to the site

  @api
  Scenario Outline: Login to site, and check access to the edition page.
    Given  I am an anonymous user
    When   I visit "<url>"
    Then   I should get a "200" HTTP response
    And    I should be on a page titled "<title>"

  Examples:
    | url | title |
    |content/בית-הספר-א-18 | בית הספר א \| Haskala |
    |content/ספר-מסלול-0 | ספר מסלול \| Haskala |
    |content/מלוכת-שאול-1 |מלוכת שאול \| Haskala |
    |content/שירי-תפארת-א-5 | שירי תפארת א \| Haskala |
    |content/תלמוד-לשון-עברי-9 | תלמוד לשון עברי \| Haskala |
