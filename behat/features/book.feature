Feature: User login
  In order to be able to be recognized by the site
  As an anonymous user
  We need to be able to login to the site

  @api
  Scenario Outline: Login to site, and check access to the homepage.
    Given  I am an anonymous user
    When   I visit "<url>"
    Then   I should get a "200" HTTP response
    And    I should be on a page titled "<title>"

  Examples:
    | url                  | title                   |
    |content/ספר-נאוה-קדש   | ספר נאוה קדש \| Haskala  |
    |content/שיר-תקכז       | שיר - תקכז \| Haskala    |
    |content/ספר-כתר-מלכות  | ספר כתר מלכות \| Haskala  |


