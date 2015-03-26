RoomifyCore
===========

Core Drupal Distro for Basic Rooms installation


Installation instructions:
==========================
1. Download Drupal core.

    `drush dl drupal`

2. Go to the `/profiles` directory inside Drupal and clone this repo into roomifycore:

    `git clone https://github.com/Roomify/RoomifyCore.git roomifycore`

3. Go to the `/profiles/roomifycore` directory and run:

    `drush make --contrib-destination --no-core roomifycore.make`

