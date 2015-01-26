Feature: Edition
  In order to be able to view a edition
  As an anonymous user
  We need to be able to have access to a edition page

  @api
  Scenario Outline: Login to site, and check access to the edition page.
    Given I am an anonymous user
    When  I visit "<title>" node of type "edition"
    Then  I should get a "200" HTTP response
    And   I should see the text "<text>"

  Examples:
    | title                                                                                     | text                                                          |
    | יונה - תקמ"ח                                                                              | וינוגרד                                                         |
    | חלקת מחקק - תק"ע                                                                        | וינוגרד                                                         |
    | ילדות ובחרות או נתיבות החנוך והמוסר - תקמ"ו                                                 | Berlin                                                        |
    | Ueber die Verbesserung des Judenthums - 1808                                              | החיבור הודפס מחדש ב- 1808 בכתב העת Sulamith                  |
    | An die Herausgeber des hebräischen Sammlers über die frühe Beerdigung der Juden - 1788    | 2. verbesserte und vermehrte Auflage [Voß und Sohn], 60 S.    |
