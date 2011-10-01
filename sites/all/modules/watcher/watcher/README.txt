Watcher Module for Drupal 7.x

Feature overview

    * Lets users watch nodes for changes or new comments being posted without
      having to post themselves.
    * Lets users be notified when new posts are made.
    * Uses AJAX to toggle watching for a smooth user experience.
    * Allows both anonymous and registered users to watch nodes.
    * Supports email notifications being sent when both or either of the
      above occurs.
    * Template-based notification messages using the Token module - edit the
      templates to your liking!
    * Provides a binder with an overview of the nodes you watch. From the
      binder you can also toggle email notifications for each node you watch.
    * Users may choose to publish the binder so that other users can see what
      they're watching, providing a form of social book marking.
    * Uses a queue-based email dispatcher to handle large numbers of notifications.
    * Users can opt to automatically watch nodes they create or comment on.
    * User settings can have default values, set by the site owner, that can be
      customized and overridden by the user.
    * Highly customizable, configurable user interface and themeable.
    * Designed with usability and exceptional user experience as a high priority.

Watcher was developed to fill a gap that has existed for a long time. Even
though there are several subscription and notification modules out there,
none is both easy to use or particularly specialized and allows instant
(or near instant) notifications. Watcher is not a general solution to
notifications but caters to the needs of community sites.


Requirements
------------
To install this version of Watcher you need:

* Drupal 7.x
* Drupal core modules: Node, Comment, Text, Field, Field SQL storage
* Token module (http://drupal.org/project/token)

There's a version for Drupal 5 and 6 as well, available from:
http://drupal.org/project/watcher


Installation
------------
To install Watcher, do the following:

  1. If you do not have the Token module installed, download and install it.
     Follow the instructions for that module.

  2. Download the latest stable version of Watcher from its project
     page: http://drupal.org/project/watcher

  3. Unpack the file you downloaded into sites/all/modules or the
     modules directory of your site.

  4. Go to Modules (admin/modules) and enable the module.

  5. Go to Administration � Configuration � Watcher � Settings
     page to configure the module.

  6. Edit those content types you which to make watchable by opening the
     content type edit form and click the Enable watching checkbox in the
     Watcher settings pane.


Upgrading from Drupal 5 or 6
----------------------------
If you've been using a previous version of Watcher, make sure you go to update.php
and run the update script after uploading the new module files. Note that
at the time of this release only upgrading from 6 to 7 has been tested.


The Drupal 7 version of watcher was upgraded from the 6.14 version of watcher
Here are some changes that were made to that version
---------------------------------------------------
  - added: email notifications for new posts
  - added: autowatching of new posts made by other users
  - added: ability to fully specify toggle link locations per content type
           locations include top or bottom of content, node links area, or
           a PHP variable to be used by a template.
  - added: ability to specify toggle link text for content and links areas
  - added: anonymous users watched table (Configuration � Watcher � Statistics)
  - added: views data for watched nodes and user settings, allows views to be
           created with that data; also included are two default views
  - added: username now passed through theme('username')
  - added: notification of comment by anonymous now names the author as anonymous
  - added: distinction between new and edited comments (see issues below)
  - added: templates for email subject text
  - added: admin setting to allow change authors to get notifications of their changes

  - fixed: blocked users no longer get notifications
  - fixed: improved method of toggling from links in notification emails to solve
    the problem of session based token not working when session is gone.
  - fixed: made user/0/watcher not accessible by non-admin users
  - fixed: "entire comment" in notification now works properly, added separate
           email templates for excerpted and entire comments, code automatically
           picks proper template based on settings and length of comment.
  - fixed: !important removed from watcher.css
  - fixed: notification link to comment in multi-page comment situation now goes
    to proper page
  - fixed: queue send code to keep better track of the queue after module exits


Issues
------
1. In previous versions of watcher, both new and updated comments where always
called new comments in the email notifications. This version attempts to fix that.

Drupal signals that a comment has been updated when it has been either edited
or is a new or edited comment that has been approved for publication. Since there
seems to be no way to distinguish whether a comment is new or edited in this
case, there is an assumption made to guess the most probable state. The
assumption is that if the comments author requires approval, then the update
reflects a new comment just approved.

Therefore, if you have configured that any authenticated users require
approval of their comments, edited comments will be reported as new comments.

If this situation is not tolerable then do the following:
Edit the subject and body email templates for updated and new comments to
reflect the ambiguity, e.g. say "new or updated comment has been published"
in both sets of templates.

2. In case Watcher does not appear to work for anonymous users even though the
role Anonymous has been granted the necessary permissions, your users table
may be missing the anonymous user.

To fix this, first empty your site's cache. You can do that by going to
Configuration � Development � Performance (admin/config/development/performance)

Secondly, make sure there's a row with uid 0 in your site's users table.
You can confirm that by executing this SQL query:
SELECT * FROM `users` WHERE uid = 0;

The query should return exactly one row. If no row is returned, the row is
missing and must be restored. Execute this query to add the row:
INSERT INTO `users` VALUES (0, '', '', '', 0, 0, 0, '', '', 0, 0, 0, 0, NULL, '', '', '', NULL);

See: http://drupal.org/node/370459

3. The token method for verifying the watcher toggle link breaks for an anonymous
user when caching is turned on. The code will bypass the token check and allow
the link to work. If this is not acceptable to you, the two solutions are to
either disable anonymous watching, or turn off caching for anonymous.


CAPTCHA support and preventing spam
-----------------------------------
Since Watcher now supports anonymous users watching nodes, CAPTCHA support has
been added to help prevent spam submissions. Download CAPTCHA module:
http://www.drupal.org/project/captcha

Watcher is known to work with CAPTCHA 6.x-1.0-rc2 and probably also all subsequent
6.x-1.0 release. Compatibility with 6.x-2.0 and later is not confirmed at this point.

Install CAPTCHA and set up its permissions as needed. Then go to:
Administration � Configuration � People � CAPTCHA
admin/config/people/captcha

Enter "_watcher_watch_toggle_anonymous_form" (quotation marks omitted) in the
text box at the end of the FORM_ID table. Select a challenge type and click
the "Save configuration" button. CAPTCHA will now display the challenge you
selected when anonymous users want to start watching a node.


Configuration
-------------
There are three areas for configuration, admin settings, permissions, and user
settings.

1. Admin Settings

The module can be configured by going to:
Administration � Configuration � Watcher

You can customize a wide range of options. Most of this is quite straight-forward
however some things may require an explanation.

Under "Content Type Settings" a table shows the watcher settings for each content
type. The Drupal 7 version differs from the Drupal 6 version in that the
watcher settings can be different for each content type. Therefor to change
the settings for a content type, you click on the content type name in the table
and you will be taken to the edit form for that type. Near the bottom of the form
you will find the "Watcher settings" section.

Under "Toggle Link Settings" you can customize the text in toggle links. There
are also some defaults for teaser and rss links to enabled, and the position of
those links. The defaults determine the initial settings when a content type
is first made watchable. They are not universal settings, you must go to each
content type to edit its settings.

Under "Settings for Email Notifications" you can choose what method to use for
sending emails. This will have an impact on how many messages are sent at once.
Watcher stores notifications to be sent in a message queue and every time messages
are sent they're taken off the queue. The method affects when the queue messages are
actually sent, it can either happen when cron and cron.php is being run or when a
user posts a comment.

If there are many messages in the queue, the best setting to use is cron and making
sure cron is run frequently enough that the entire queue is being processed. You can
change the time limit for message sending. The server will send as many messages as
possible during this interval. Any messages left unsent will remain in the queue
until it is processed again.

You may also modify the notification message templates that are used to generate the
notification messages. You can use placeholder tokens to insert the content that
changes, such as recipient name and comment excerpt.

Under "Default User Settings" you specify the user settings for all users that
have not customized their settings.

The admin page titled Statistics shows some basic statistics about the module which may be of
interest to you as a site owner. If there are unsent messages in the message queue,
these can be viewed here as well. There is also the ability to view a table
showing the watched posts for anonymous users.

If the views module is installed, you can also see tables showing the nodes
being watched and the watcher user settings.

The Testing page allows you to do testing in case notification messages are not being
delivered. You can create test messages that are sent to your own email address.


2. Permissions

Go to People permissions and to the Watcher section to determine what roles
have what permissions. This is required for watcher to work.

3. User settings

Watcher allows every user on your site to customize how the module works for them.
Users may enable or disable email notifications and make it so that they automatically
watch every post they make or comment on. Users who have not yet altered these settings
will be affected by the user setting defaults. These default settings apply until a
user goes to his or her settings page for Watcher and clicks "Save". The feature
is allowed via a watcher permission setting. Watcher setting are in a tab
on the users account page.


Retroactively add existing posts
--------------------------------
If you have a large site and a large quantity of nodes/posts you may want to add the
existing nodes your users have made or commented on to their watched posts lists.

You can do this by running the SQL queries below. The queries below will do the
following:
- add all posts a user has created to his/her watched posts list
- add the nodes belonging to every comment a user has made to his/her watched posts list

CAUTION: Make a database dump to keep as a backup copy before attempting this!
CAUTION: The following has only been tested with MySQL 5!

INSERT IGNORE INTO watcher_nodes (uid, nid, send_email, added) SELECT uid, nid, 1, UNIX_TIMESTAMP() FROM node;
INSERT IGNORE INTO watcher_nodes (uid, nid, send_email, added) SELECT uid, nid, 1, UNIX_TIMESTAMP() FROM comments;


Theming
-------
Watcher is entirely themable. Open watcher.module in your editor to see what
theme functions are available to be overridden. The functions are documented in
detail in the code.

Themable functions of interest:
  * watcher_binder(array('intro_text' => null, 'posts_table_header' => null,
                   'posts_table_body' => null))
  * watcher_binder_email_icon(array('t' => null, 'type' => null, 'url' => null,
                   'query' => null))
  * watcher_binder_stop_watching_icon(array('url' => null, 'query' => null))
  * watcher_node_toggle_watching_link(array('uid' => null, 'nid' => null,
                    'query' => null, 'user_is_watching' => null, 't' => array())
  * watcher_help_page(array('content' => null))
  * watcher_settings_defaults_notice(array('defaults_text' => null))

The position of the watcher toggle link is configurable. The link can be
positioned at the bottom or top of the content, or in the node links section.
It can also be passed as a php variable for a template ($node->watcher_toggle_link).
The position can be configured separately for the teaser and full content view modes.


Terminology
-----------
I have tried to consistently use the term "post" in the parts of the module that
the end users see as it makes way more sense to non-Drupallers than the word "node".
In the code comments and documentation, I've used the word "node" where I talk
about nodes.

The word "binder", is used interchangeable with the term "watched posts list". They're
exactly the same thing, "binder" is a term Hans Dekker of Wordsy.com suggested and it's
stayed in the module since its first versions.


Author
------
The module was developed by Jakob Persson <http://drupal.org/user/37564> of
NodeOne, Sweden's leading Drupal consulting firm. Our goal is to empower the
user by building usable, powerful and effective web solutions for our clients.
Visit us at http://www.nodeone.se

I am a developer that considers usability and user experience to be some of the
defining properties of successful software applications as well as devices and
appliances. I have a background in cognitive science and HCI and I work with
user experience and usability at NodeOne, building beautiful, usable
web sites and intranet applications for our clients.

The author can be contacted for paid customizations of this module as well as
Drupal consulting, installation, development and customizations.


Upgrade coding from v6x-1.4 to the initial Drupal 7 version
-----------------------------------------------------------
Done by Jim Tucker <http://drupal.org/user/1185012>


Sponsors
--------
The development of this module has been sponsored by

  * Wordsy <http://www.wordsy.com>
  * NodeOne <http://www.nodeone.se>


Thanks
------
To Hans Dekker <http://www.hansdekker.com> for the idea as well as suggestions
and feedback.

Some of the icons were either taken directly from the Tango Icon Library or were
derived from Tango icons.
http://tango.freedesktop.org/


