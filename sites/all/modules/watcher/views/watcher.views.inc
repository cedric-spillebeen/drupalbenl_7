<?php

/**
 * @file
 * Watcher views
 */

/**
 * Implements hook_views_data
 */
function watcher_views_data() {
    $data = array();

    // node data ..
    $data['watcher_nodes']['table']['group'] = t('Watcher Nodes');

    $data['watcher_nodes']['table']['base'] = array(
        'field' => 'nid',
        'title' => t('Watcher Nodes'),
        'help' => t("Nodes being watched, by user."),
        'weight' => -10,
    );

    // This table references the {node} table.
    // This creates an 'implicit' relationship to the node table, so that when 'Node'
    // is the base table, the fields are automatically available.
    $data['watcher_nodes']['table']['join'] = array(
        'node' => array(
            'left_field' => 'nid',
            'field' => 'nid',
        ),
    );

    // Node ID field.
    $data['watcher_nodes']['nid'] = array(
        'title' => t('Watcher Nodes Content'),
        'help' => t('Watcher node that references a node.'),
        'relationship' => array(
            'base' => 'node',
            'field' => 'nid',
            'handler' => 'views_handler_relationship',
            'label' => t('Watcher node'),
        ),
    );

    // Example timestamp field.
    $data['watcher_nodes']['added'] = array(
        'title' => t('added'),
        'help' => t('Added date of watching node.'),
        'field' => array(
            'handler' => 'views_handler_field_date',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort_date',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_date',
        ),
    );

    // join user table to get user data
    $data['watcher_nodes']['uid'] = array(
        'title' => t('user'),
        'help' => t("The user ID of the node watcher."),
        'relationship' => array(
            'base' => 'users',
            'field' => 'uid',
            'handler' => 'views_handler_relationship',
            'label' => t('user'),
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
        'field' => array(
            'handler' => 'views_handler_field_user',
        ),
    );


    $data['watcher_nodes']['mail'] = array(
        'title' => t('email'),
        'help' => t('User email, including anonymous'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_nodes']['watch_for'] = array(
        'title' => t('watch for'),
        'help' => t('What the anonymous user elected to watch for (1 = all, 2 = comments, 3 = updates'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    // user data ..
    $data['watcher_user_settings']['table']['group'] = t('Watcher Users');

    $data['watcher_user_settings']['table']['base'] = array(
        'field' => 'uid',
        'title' => t('Watcher Users'),
        'help' => t("Users watching nodes."),
        'weight' => -10,
    );

    // This table references the {user} table.
    // This creates an 'implicit' relationship to the user table, so that when 'User'
    // is the base table, the fields are automatically available.
    $data['watcher_user_settings']['table']['join'] = array(
        'users' => array(
            'left_field' => 'uid',
            'field' => 'uid',
        ),
    );

    // User ID field.
    $data['watcher_user_settings']['uid'] = array(
        'title' => t('Watcher Users'),
        'help' => t('Watcher user.'),
        'relationship' => array(
            'base' => 'users',
            'field' => 'uid',
            'handler' => 'views_handler_relationship',
            'label' => t('Watcher user'),
        ),
    );

    $data['watcher_user_settings']['automatic_enable_notifications'] = array(
        'title' => t('auto enable notify'),
        'help' => t('Automatically enable notifications for the post when a user starts watching a post.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['notifications_inserts'] = array(
        'title' => t('notify inserts'),
        'help' => t('User will be notified about newly created posts by other users.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['notifications_updates'] = array(
        'title' => t('notify updates'),
        'help' => t('User will be notified about updates of posts the user watches.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['notifications_new_comments'] = array(
        'title' => t('notify new comments'),
        'help' => t('User will be notified about new comments on posts the user watches.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['autowatch_commented_on'] = array(
        'title' => t('auto watch commented'),
        'help' => t('User will automatically watch nodes the user comments on.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['autowatch_posted'] = array(
        'title' => t('auto watch self posted'),
        'help' => t('User will automatically watch nodes the user creates.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['autowatch_inserts'] = array(
        'title' => t('auto watch other posted'),
        'help' => t('User will automatically watch nodes created by others.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['share_binder'] = array(
        'title' => t('share list'),
        'help' => t('Whether the user\'s list of watched posts should be viewable by others.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    $data['watcher_user_settings']['custom'] = array(
        'title' => t('custom'),
        'help' => t('Whether the user has customized the settings or whether they were derived from the defaults.'),
        'field' => array(
            'handler' => 'views_handler_field',
            'click sortable' => TRUE,
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
    );

    return $data;
}
