Feature: User login
  In order to be able to be recognized by the site
  As an anonymous user
  We need to be able to login to the site

  @api
  Scenario Outline: Login to site, and check access to the book translation page.
    Given  I am an anonymous user
    When   I visit "<url>"
    Then   I should get a "200" HTTP response
    And    I should be on a page titled "<title>"

  Examples:
    | url | title |
    | content/entwurf-einer-geschichte-der-armen-und-armenanstalten       | Entwurf einer Geschichte der Armen und Armenanstalten \| Haskala                                       |
    | content/הדרכת-הילד-אדער-ערסטער-אונטערריכט-פיר-קינדער-פאן-דרייא-ביס-פינף-יאהרען | הדרכת הילד אדער ערסטער אונטערריכט פיר קינדער פאן דרייא ביס פינף יאהרען \| Haskala                                 |
    | content/trauerrede-über-das-ableben-des-weisesten-monarchen-friedrich-des-zweiten | Trauerrede über das Ableben des weisesten Monarchen ... Friedrich des Zweiten \| Haskala |
    | content/ספר-מלחמה-בשלום                                             | ספר מלחמה בשלום \| Haskala                                                                            |
    | content/זה-ספר-בית-המדות                                              | זה ספר בית המדות \| Haskala                                                                              |
