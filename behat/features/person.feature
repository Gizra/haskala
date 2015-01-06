Feature: User login
  In order to be able to be recognized by the site
  As an anonymous user
  We need to be able to login to the site

  @api
  Scenario Outline: Login to site, and check access to the person page.
    Given  I am an anonymous user
    When   I visit "<url>"
    Then   I should get a "200" HTTP response
    And    I should be on a page titled "<title>"

  Examples:
    | url | title |
    | content/mendelssohn-moses            | Mendelssohn, Moses \| Haskala            |
    | content/friedländer-david            | Friedländer, David \| Haskala            |
    | content/lindau-baruch-ben-jehuda-löb | Lindau, Baruch ben Jehuda Löb \| Haskala |
