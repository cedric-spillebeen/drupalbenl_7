<?php

/**
 * @file
 * Default views for watcher node and user data tables.
 */

/**
 * Implements hook_views_default_views()
 */
function watcher_views_default_views() {
    $views = array();

    $view = new view;
    $view->name = 'watcher_user_setings';
    $view->description = 'Watcher settings for each user';
    $view->tag = 'default';
    $view->base_table = 'users';
    $view->human_name = 'Watcher user settings';
    $view->core = 7;
    $view->api_version = '3.0-alpha1';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Watcher user settings';
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'access user profiles';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'table';
    $handler->display->display_options['style_options']['columns'] = array(
        'name' => 'name',
        'automatic_enable_notifications' => 'automatic_enable_notifications',
        'autowatch_commented_on' => 'autowatch_commented_on',
        'autowatch_inserts' => 'autowatch_inserts',
        'autowatch_posted' => 'autowatch_posted',
        'custom' => 'custom',
        'notifications_inserts' => 'notifications_inserts',
        'notifications_new_comments' => 'notifications_new_comments',
        'notifications_updates' => 'notifications_updates',
        'share_binder' => 'share_binder',
    );
    $handler->display->display_options['style_options']['default'] = '-1';
    $handler->display->display_options['style_options']['info'] = array(
        'name' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'automatic_enable_notifications' => array(
            'sortable' => 0,
            'default_sort_order' => 'desc',
            'align' => '',
            'separator' => '',
        ),
        'autowatch_commented_on' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'autowatch_inserts' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'autowatch_posted' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'custom' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'notifications_inserts' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'notifications_new_comments' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'notifications_updates' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
        'share_binder' => array(
            'sortable' => 0,
            'default_sort_order' => 'asc',
            'align' => '',
            'separator' => '',
        ),
    );
    $handler->display->display_options['style_options']['override'] = 1;
    $handler->display->display_options['style_options']['sticky'] = 0;
    $handler->display->display_options['style_options']['empty_table'] = 0;
    /* Field: User: Name */
    $handler->display->display_options['fields']['name']['id'] = 'name';
    $handler->display->display_options['fields']['name']['table'] = 'users';
    $handler->display->display_options['fields']['name']['field'] = 'name';
    $handler->display->display_options['fields']['name']['label'] = 'user name';
    $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['name']['alter']['external'] = 0;
    $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 0;
    $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 0;
    $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['name']['alter']['html'] = 0;
    $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['name']['hide_empty'] = 0;
    $handler->display->display_options['fields']['name']['empty_zero'] = 0;
    $handler->display->display_options['fields']['name']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['name']['link_to_user'] = 1;
    $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
    /* Field: Watcher Users: auto enable notify */
    $handler->display->display_options['fields']['automatic_enable_notifications']['id'] = 'automatic_enable_notifications';
    $handler->display->display_options['fields']['automatic_enable_notifications']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['automatic_enable_notifications']['field'] = 'automatic_enable_notifications';
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['external'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['alter']['html'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['automatic_enable_notifications']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['automatic_enable_notifications']['hide_empty'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['empty_zero'] = 0;
    $handler->display->display_options['fields']['automatic_enable_notifications']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: auto watch commented */
    $handler->display->display_options['fields']['autowatch_commented_on']['id'] = 'autowatch_commented_on';
    $handler->display->display_options['fields']['autowatch_commented_on']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['autowatch_commented_on']['field'] = 'autowatch_commented_on';
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['external'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['alter']['html'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['autowatch_commented_on']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['autowatch_commented_on']['hide_empty'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['empty_zero'] = 0;
    $handler->display->display_options['fields']['autowatch_commented_on']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: auto watch other posted */
    $handler->display->display_options['fields']['autowatch_inserts']['id'] = 'autowatch_inserts';
    $handler->display->display_options['fields']['autowatch_inserts']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['autowatch_inserts']['field'] = 'autowatch_inserts';
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['external'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['alter']['html'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['autowatch_inserts']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['autowatch_inserts']['hide_empty'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['empty_zero'] = 0;
    $handler->display->display_options['fields']['autowatch_inserts']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: auto watch self posted */
    $handler->display->display_options['fields']['autowatch_posted']['id'] = 'autowatch_posted';
    $handler->display->display_options['fields']['autowatch_posted']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['autowatch_posted']['field'] = 'autowatch_posted';
    $handler->display->display_options['fields']['autowatch_posted']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['external'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['alter']['html'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['autowatch_posted']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['autowatch_posted']['hide_empty'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['empty_zero'] = 0;
    $handler->display->display_options['fields']['autowatch_posted']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: custom */
    $handler->display->display_options['fields']['custom']['id'] = 'custom';
    $handler->display->display_options['fields']['custom']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['custom']['field'] = 'custom';
    $handler->display->display_options['fields']['custom']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['external'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['custom']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['custom']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['custom']['alter']['html'] = 0;
    $handler->display->display_options['fields']['custom']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['custom']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['custom']['hide_empty'] = 0;
    $handler->display->display_options['fields']['custom']['empty_zero'] = 0;
    $handler->display->display_options['fields']['custom']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: notify inserts */
    $handler->display->display_options['fields']['notifications_inserts']['id'] = 'notifications_inserts';
    $handler->display->display_options['fields']['notifications_inserts']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['notifications_inserts']['field'] = 'notifications_inserts';
    $handler->display->display_options['fields']['notifications_inserts']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['external'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['alter']['html'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['notifications_inserts']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['notifications_inserts']['hide_empty'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['empty_zero'] = 0;
    $handler->display->display_options['fields']['notifications_inserts']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: notify new comments */
    $handler->display->display_options['fields']['notifications_new_comments']['id'] = 'notifications_new_comments';
    $handler->display->display_options['fields']['notifications_new_comments']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['notifications_new_comments']['field'] = 'notifications_new_comments';
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['external'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['alter']['html'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['notifications_new_comments']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['notifications_new_comments']['hide_empty'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['empty_zero'] = 0;
    $handler->display->display_options['fields']['notifications_new_comments']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: notify updates */
    $handler->display->display_options['fields']['notifications_updates']['id'] = 'notifications_updates';
    $handler->display->display_options['fields']['notifications_updates']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['notifications_updates']['field'] = 'notifications_updates';
    $handler->display->display_options['fields']['notifications_updates']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['external'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['notifications_updates']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['notifications_updates']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['alter']['html'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['notifications_updates']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['notifications_updates']['hide_empty'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['empty_zero'] = 0;
    $handler->display->display_options['fields']['notifications_updates']['hide_alter_empty'] = 0;
    /* Field: Watcher Users: share list */
    $handler->display->display_options['fields']['share_binder']['id'] = 'share_binder';
    $handler->display->display_options['fields']['share_binder']['table'] = 'watcher_user_settings';
    $handler->display->display_options['fields']['share_binder']['field'] = 'share_binder';
    $handler->display->display_options['fields']['share_binder']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['external'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['share_binder']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['share_binder']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['share_binder']['alter']['html'] = 0;
    $handler->display->display_options['fields']['share_binder']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['share_binder']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['share_binder']['hide_empty'] = 0;
    $handler->display->display_options['fields']['share_binder']['empty_zero'] = 0;
    $handler->display->display_options['fields']['share_binder']['hide_alter_empty'] = 0;
    /* Sort criterion: User: Name */
    $handler->display->display_options['sorts']['name']['id'] = 'name';
    $handler->display->display_options['sorts']['name']['table'] = 'users';
    $handler->display->display_options['sorts']['name']['field'] = 'name';
    $handler->display->display_options['sorts']['name']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['name']['expose']['label'] = 'Name';
    /* Sort criterion: Watcher Users: auto enable notify */
    $handler->display->display_options['sorts']['automatic_enable_notifications']['id'] = 'automatic_enable_notifications';
    $handler->display->display_options['sorts']['automatic_enable_notifications']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['automatic_enable_notifications']['field'] = 'automatic_enable_notifications';
    $handler->display->display_options['sorts']['automatic_enable_notifications']['order'] = 'DESC';
    $handler->display->display_options['sorts']['automatic_enable_notifications']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['automatic_enable_notifications']['expose']['label'] = 'auto enable notify';
    /* Sort criterion: Watcher Users: auto watch commented */
    $handler->display->display_options['sorts']['autowatch_commented_on']['id'] = 'autowatch_commented_on';
    $handler->display->display_options['sorts']['autowatch_commented_on']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['autowatch_commented_on']['field'] = 'autowatch_commented_on';
    $handler->display->display_options['sorts']['autowatch_commented_on']['order'] = 'DESC';
    $handler->display->display_options['sorts']['autowatch_commented_on']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['autowatch_commented_on']['expose']['label'] = 'auto watch commented';
    /* Sort criterion: Watcher Users: auto watch other posted */
    $handler->display->display_options['sorts']['autowatch_inserts']['id'] = 'autowatch_inserts';
    $handler->display->display_options['sorts']['autowatch_inserts']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['autowatch_inserts']['field'] = 'autowatch_inserts';
    $handler->display->display_options['sorts']['autowatch_inserts']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['autowatch_inserts']['expose']['label'] = 'auto watch other posted';
    /* Sort criterion: Watcher Users: auto watch self posted */
    $handler->display->display_options['sorts']['autowatch_posted']['id'] = 'autowatch_posted';
    $handler->display->display_options['sorts']['autowatch_posted']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['autowatch_posted']['field'] = 'autowatch_posted';
    $handler->display->display_options['sorts']['autowatch_posted']['order'] = 'DESC';
    $handler->display->display_options['sorts']['autowatch_posted']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['autowatch_posted']['expose']['label'] = 'auto watch self posted';
    /* Sort criterion: Watcher Users: custom */
    $handler->display->display_options['sorts']['custom']['id'] = 'custom';
    $handler->display->display_options['sorts']['custom']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['custom']['field'] = 'custom';
    $handler->display->display_options['sorts']['custom']['order'] = 'DESC';
    $handler->display->display_options['sorts']['custom']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['custom']['expose']['label'] = 'custom';
    /* Sort criterion: Watcher Users: notify inserts */
    $handler->display->display_options['sorts']['notifications_inserts']['id'] = 'notifications_inserts';
    $handler->display->display_options['sorts']['notifications_inserts']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['notifications_inserts']['field'] = 'notifications_inserts';
    $handler->display->display_options['sorts']['notifications_inserts']['order'] = 'DESC';
    $handler->display->display_options['sorts']['notifications_inserts']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['notifications_inserts']['expose']['label'] = 'notify inserts';
    /* Sort criterion: Watcher Users: notify new comments */
    $handler->display->display_options['sorts']['notifications_new_comments']['id'] = 'notifications_new_comments';
    $handler->display->display_options['sorts']['notifications_new_comments']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['notifications_new_comments']['field'] = 'notifications_new_comments';
    $handler->display->display_options['sorts']['notifications_new_comments']['order'] = 'DESC';
    $handler->display->display_options['sorts']['notifications_new_comments']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['notifications_new_comments']['expose']['label'] = 'notify new comments';
    /* Sort criterion: Watcher Users: notify updates */
    $handler->display->display_options['sorts']['notifications_updates']['id'] = 'notifications_updates';
    $handler->display->display_options['sorts']['notifications_updates']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['notifications_updates']['field'] = 'notifications_updates';
    $handler->display->display_options['sorts']['notifications_updates']['order'] = 'DESC';
    $handler->display->display_options['sorts']['notifications_updates']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['notifications_updates']['expose']['label'] = 'notify updates';
    /* Sort criterion: Watcher Users: share list */
    $handler->display->display_options['sorts']['share_binder']['id'] = 'share_binder';
    $handler->display->display_options['sorts']['share_binder']['table'] = 'watcher_user_settings';
    $handler->display->display_options['sorts']['share_binder']['field'] = 'share_binder';
    $handler->display->display_options['sorts']['share_binder']['order'] = 'DESC';
    $handler->display->display_options['sorts']['share_binder']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['share_binder']['expose']['label'] = 'share list';
    /* Filter criterion: User: Active */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'users';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = '1';
    $handler->display->display_options['filters']['status']['group'] = 0;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'watcher_user_settings';
    $views['watcher_user_settings'] = $view;

    $view = new view;
    $view->name = 'watcher_nodes';
    $view->description = '';
    $view->tag = 'default';
    $view->base_table = 'node';
    $view->human_name = 'Watcher nodes';
    $view->core = 7;
    $view->api_version = '3.0-alpha1';
    $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

    /* Display: Master */
    $handler = $view->new_display('default', 'Master', 'default');
    $handler->display->display_options['title'] = 'Watcher nodes';
    $handler->display->display_options['access']['type'] = 'perm';
    $handler->display->display_options['access']['perm'] = 'administer watcher';
    $handler->display->display_options['cache']['type'] = 'none';
    $handler->display->display_options['query']['type'] = 'views_query';
    $handler->display->display_options['query']['options']['query_comment'] = FALSE;
    $handler->display->display_options['exposed_form']['type'] = 'basic';
    $handler->display->display_options['pager']['type'] = 'full';
    $handler->display->display_options['pager']['options']['items_per_page'] = '10';
    $handler->display->display_options['style_plugin'] = 'table';
    /* Footer: Global: Text area */
    $handler->display->display_options['footer']['area']['id'] = 'area';
    $handler->display->display_options['footer']['area']['table'] = 'views';
    $handler->display->display_options['footer']['area']['field'] = 'area';
    $handler->display->display_options['footer']['area']['label'] = 'Help text';
    $handler->display->display_options['footer']['area']['empty'] = TRUE;
    $handler->display->display_options['footer']['area']['content'] = 'The \'watch for\' field indicates what the anonymous user elected to watch for: 1 = all, 2 = comments, 3 = updates. Note that the email field is only for the anonymous users.';
    $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
    $handler->display->display_options['footer']['area']['tokenize'] = 0;
    /* Field: Content: Title */
    $handler->display->display_options['fields']['title']['id'] = 'title';
    $handler->display->display_options['fields']['title']['table'] = 'node';
    $handler->display->display_options['fields']['title']['field'] = 'title';
    $handler->display->display_options['fields']['title']['label'] = 'title';
    $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['title']['alter']['external'] = 0;
    $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
    $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
    $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['title']['alter']['html'] = 0;
    $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['title']['hide_empty'] = 0;
    $handler->display->display_options['fields']['title']['empty_zero'] = 0;
    $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['title']['link_to_node'] = 1;
    /* Field: Watcher Nodes: added */
    $handler->display->display_options['fields']['added']['id'] = 'added';
    $handler->display->display_options['fields']['added']['table'] = 'watcher_nodes';
    $handler->display->display_options['fields']['added']['field'] = 'added';
    $handler->display->display_options['fields']['added']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['added']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['added']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['added']['alter']['external'] = 0;
    $handler->display->display_options['fields']['added']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['added']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['added']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['added']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['added']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['added']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['added']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['added']['alter']['html'] = 0;
    $handler->display->display_options['fields']['added']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['added']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['added']['hide_empty'] = 0;
    $handler->display->display_options['fields']['added']['empty_zero'] = 0;
    $handler->display->display_options['fields']['added']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['added']['date_format'] = 'privatemsg_current_day';
    /* Field: Watcher Nodes: email */
    $handler->display->display_options['fields']['mail']['id'] = 'mail';
    $handler->display->display_options['fields']['mail']['table'] = 'watcher_nodes';
    $handler->display->display_options['fields']['mail']['field'] = 'mail';
    $handler->display->display_options['fields']['mail']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['external'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['mail']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['mail']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['mail']['alter']['html'] = 0;
    $handler->display->display_options['fields']['mail']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['mail']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['mail']['hide_empty'] = 0;
    $handler->display->display_options['fields']['mail']['empty_zero'] = 0;
    $handler->display->display_options['fields']['mail']['hide_alter_empty'] = 0;
    /* Field: Watcher Nodes: watch for */
    $handler->display->display_options['fields']['watch_for']['id'] = 'watch_for';
    $handler->display->display_options['fields']['watch_for']['table'] = 'watcher_nodes';
    $handler->display->display_options['fields']['watch_for']['field'] = 'watch_for';
    $handler->display->display_options['fields']['watch_for']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['external'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['watch_for']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['watch_for']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['watch_for']['alter']['html'] = 0;
    $handler->display->display_options['fields']['watch_for']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['watch_for']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['watch_for']['hide_empty'] = 0;
    $handler->display->display_options['fields']['watch_for']['empty_zero'] = 0;
    $handler->display->display_options['fields']['watch_for']['hide_alter_empty'] = 0;
    /* Field: Watcher Nodes: user */
    $handler->display->display_options['fields']['uid']['id'] = 'uid';
    $handler->display->display_options['fields']['uid']['table'] = 'watcher_nodes';
    $handler->display->display_options['fields']['uid']['field'] = 'uid';
    $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
    $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
    $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
    $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
    $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
    $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
    $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
    $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
    $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 0;
    $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
    /* Sort criterion: Content: Title */
    $handler->display->display_options['sorts']['title']['id'] = 'title';
    $handler->display->display_options['sorts']['title']['table'] = 'node';
    $handler->display->display_options['sorts']['title']['field'] = 'title';
    $handler->display->display_options['sorts']['title']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['title']['expose']['label'] = 'Title';
    /* Sort criterion: Content: Post date */
    $handler->display->display_options['sorts']['created']['id'] = 'created';
    $handler->display->display_options['sorts']['created']['table'] = 'node';
    $handler->display->display_options['sorts']['created']['field'] = 'created';
    $handler->display->display_options['sorts']['created']['order'] = 'DESC';
    $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['created']['expose']['label'] = 'Post date';
    /* Sort criterion: Watcher Nodes: added */
    $handler->display->display_options['sorts']['added']['id'] = 'added';
    $handler->display->display_options['sorts']['added']['table'] = 'watcher_nodes';
    $handler->display->display_options['sorts']['added']['field'] = 'added';
    $handler->display->display_options['sorts']['added']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['added']['expose']['label'] = 'added';
    /* Sort criterion: Watcher Nodes: email */
    $handler->display->display_options['sorts']['mail']['id'] = 'mail';
    $handler->display->display_options['sorts']['mail']['table'] = 'watcher_nodes';
    $handler->display->display_options['sorts']['mail']['field'] = 'mail';
    $handler->display->display_options['sorts']['mail']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['mail']['expose']['label'] = 'email';
    /* Sort criterion: Watcher Nodes: watch for */
    $handler->display->display_options['sorts']['watch_for']['id'] = 'watch_for';
    $handler->display->display_options['sorts']['watch_for']['table'] = 'watcher_nodes';
    $handler->display->display_options['sorts']['watch_for']['field'] = 'watch_for';
    $handler->display->display_options['sorts']['watch_for']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['watch_for']['expose']['label'] = 'watch for';
    /* Sort criterion: Watcher Nodes: user */
    $handler->display->display_options['sorts']['uid']['id'] = 'uid';
    $handler->display->display_options['sorts']['uid']['table'] = 'watcher_nodes';
    $handler->display->display_options['sorts']['uid']['field'] = 'uid';
    $handler->display->display_options['sorts']['uid']['exposed'] = TRUE;
    $handler->display->display_options['sorts']['uid']['expose']['label'] = 'user';
    /* Filter criterion: Content: Published */
    $handler->display->display_options['filters']['status']['id'] = 'status';
    $handler->display->display_options['filters']['status']['table'] = 'node';
    $handler->display->display_options['filters']['status']['field'] = 'status';
    $handler->display->display_options['filters']['status']['value'] = 1;
    $handler->display->display_options['filters']['status']['group'] = 0;
    $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
    /* Filter criterion: Watcher Nodes: added */
    $handler->display->display_options['filters']['added']['id'] = 'added';
    $handler->display->display_options['filters']['added']['table'] = 'watcher_nodes';
    $handler->display->display_options['filters']['added']['field'] = 'added';
    $handler->display->display_options['filters']['added']['operator'] = '!=';

    /* Display: Page */
    $handler = $view->new_display('page', 'Page', 'page');
    $handler->display->display_options['path'] = 'watcher_nodes';
    $views['watcher_nodes'] = $view;

    return $views;
}
