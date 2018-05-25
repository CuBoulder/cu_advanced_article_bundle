@advanced_article_bundle
Feature: Class Notes Node Type

    When I login to a Web Express website
    As an authenticated user with the right permission
    I should be able to create an advanced article list page


    Scenario Outline: An authenticated user should be able to access the form for creating an advanced article list page
        Given  I am logged in as a user with the <role> role
        When I go to "node/add/advanced-article-list-page"
        Then I should see <message>

        Examples:
            | role            | message             |
            | edit_my_content | "Access Denied"     |
            | edit_only       | "Access Denied"     |
            | content_editor  | "Create Advanced Article List Page" |
            | site_owner      | "Create Advanced Article List Page" |
            | administrator   | "Create Advanced Article List Page" |
            | developer       | "Create Advanced Article List Page" |

    Scenario: An anonymous user should not be able to access the form for adding an advanced article list page
        When I am on "node/add/advanced-article-list-page"
        Then I should see "Access denied"