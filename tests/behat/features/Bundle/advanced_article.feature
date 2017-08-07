Feature: Digital Campaign Bundle

  @api @advanced_article @test
  Scenario Outline: Correct users can access advanced articles pages.
    Given  CU - I am logged in as a user with the <role> role
      And I am on "node/add/advanced-article-list-page"
    Then I should see <message1>
      And I am on "block/add/article-grid-list"
    Then I should see <message2>

    Examples:
      | role            | message1                            | message2                         |
      | site_owner      | "Create Advanced Article List Page" | "Create Article Grid/List block" |
      | administrator   | "Create Advanced Article List Page" | "Create Article Grid/List block" |
      | developer       | "Create Advanced Article List Page" | "Create Article Grid/List block" |
      | content_editor  | "Create Advanced Article List Page" | "Create Article Grid/List block" |
      | edit_my_content | "Access Denied"                     | "Access Denied"                  |

  @api @advanced_article
  Scenario: Create Tracking Pixel.
    Given  CU - I am logged in as a user with the "site_owner" role
      And I am on "admin/content/embeds/add/facebook"
      And I fill in "Label" with "Facebook Tracking Pixel"
      And I fill in "Path" with "node/1"
      And I fill in "ID" with "123456"
      And I select "Published" from "Status"
    When I press the "Save" button
      And I am on "node/1"
    Then the response should contain "https://www.facebook.com/tr?id=123456&ev=PageView&noscript=1"

