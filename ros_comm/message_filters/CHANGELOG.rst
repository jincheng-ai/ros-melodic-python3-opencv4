^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package message_filters
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.14.11 (2021-04-26)
--------------------

1.14.10 (2020-10-16)
--------------------
* Update maintainers (`#2075 <https://github.com/ros/ros_comm/issues/2075>`_)
* Contributors: Jacob Perron, Shane Loretz

1.14.9 (2020-08-20)
-------------------

1.14.8 (2020-08-12)
-------------------

1.14.7 (2020-07-31)
-------------------

1.14.6 (2020-05-29)
-------------------

1.14.5 (2020-03-19)
-------------------

1.14.4 (2020-02-20)
-------------------
* bump CMake minimum version to avoid CMP0048 warning (`#1869 <https://github.com/ros/ros_comm/issues/1869>`_)
* add overload of ApproximateTime::setInterMessageLowerBound() to set all topics to the same value (`#1860 <https://github.com/ros/ros_comm/issues/1860>`_)
* update approximate time filter to work with Python 2 and 3 (`#1660 <https://github.com/ros/ros_comm/issues/1660>`_)
* message_filters/__init_\_.py - Added reduce import for Python 3 compatability (`#1633 <https://github.com/ros/ros_comm/issues/1633>`_)
* remove messages that are newer than the newly added message (`#1438 <https://github.com/ros/ros_comm/issues/1438>`_)
* remove signals from find_package(Boost COMPONENTS ...) (`#1580 <https://github.com/ros/ros_comm/issues/1580>`_)
* fix message_filters build issue on the template syntax (`#1483 <https://github.com/ros/ros_comm/issues/1483>`_)

1.14.3 (2018-08-06)
-------------------
* call Subscriber::unsubscribe() in destructor (`#1434 <https://github.com/ros/ros_comm/issues/1434>`_)
* rename Python message_filters.Cache.getLastestTime to getLatestTime (`#1450 <https://github.com/ros/ros_comm/issues/1450>`_)

1.14.2 (2018-06-06)
-------------------

1.14.1 (2018-05-21)
-------------------

1.14.0 (2018-05-21)
-------------------
* change invocation to `add` to conform template syntax (`#1388 <https://github.com/ros/ros_comm/issues/1388>`_)
* fix sphinx warning (`#1371 <https://github.com/ros/ros_comm/issues/1371>`_)

1.13.6 (2018-02-05)
-------------------
* use SteadyTimer in message_filters (`#1247 <https://github.com/ros/ros_comm/issues/1247>`_)
* remove unnecessary xmlrpcpp dependency from message_filters (`#1264 <https://github.com/ros/ros_comm/issues/1264>`_)

1.13.5 (2017-11-09)
-------------------

1.13.4 (2017-11-02)
-------------------

1.13.3 (2017-10-25)
-------------------

1.13.2 (2017-08-15)
-------------------

1.13.1 (2017-07-27)
-------------------

1.13.0 (2017-02-22)
-------------------

1.12.7 (2017-02-17)
-------------------

1.12.6 (2016-10-26)
-------------------
* use boost::bind to bind the callback function (`#906 <https://github.com/ros/ros_comm/pull/906>`_)

1.12.5 (2016-09-30)
-------------------

1.12.4 (2016-09-19)
-------------------

1.12.3 (2016-09-17)
-------------------
* add fast approximate time synchronization in message_filters (in pure Python) (`#802 <https://github.com/ros/ros_comm/issues/802>`_)

1.12.2 (2016-06-03)
-------------------
* allow saving timestamp-less messages to Cache, add getLast method (`#806 <https://github.com/ros/ros_comm/pull/806>`_)

1.12.1 (2016-04-18)
-------------------
* use directory specific compiler flags (`#785 <https://github.com/ros/ros_comm/pull/785>`_)

1.12.0 (2016-03-18)
-------------------

1.11.18 (2016-03-17)
--------------------
* fix compiler warnings

1.11.17 (2016-03-11)
--------------------
* use boost::make_shared instead of new for constructing boost::shared_ptr (`#740 <https://github.com/ros/ros_comm/issues/740>`_)
* add __getattr_\_ to handle sub in message_filters as standard one (`#700 <https://github.com/ros/ros_comm/pull/700>`_)

1.11.16 (2015-11-09)
--------------------

1.11.15 (2015-10-13)
--------------------
* add unregister() method to message_filter.Subscriber (`#683 <https://github.com/ros/ros_comm/pull/683>`_)

1.11.14 (2015-09-19)
--------------------

1.11.13 (2015-04-28)
--------------------

1.11.12 (2015-04-27)
--------------------

1.11.11 (2015-04-16)
--------------------
* implement message filter cache in Python (`#599 <https://github.com/ros/ros_comm/pull/599>`_)

1.11.10 (2014-12-22)
--------------------

1.11.9 (2014-08-18)
-------------------

1.11.8 (2014-08-04)
-------------------

1.11.7 (2014-07-18)
-------------------

1.11.6 (2014-07-10)
-------------------

1.11.5 (2014-06-24)
-------------------

1.11.4 (2014-06-16)
-------------------
* add approximate Python time synchronizer (used to be in camera_calibration) (`#424 <https://github.com/ros/ros_comm/issues/424>`_)

1.11.3 (2014-05-21)
-------------------

1.11.2 (2014-05-08)
-------------------

1.11.1 (2014-05-07)
-------------------
* update API to use boost::signals2 (`#267 <https://github.com/ros/ros_comm/issues/267>`_)

1.11.0 (2014-03-04)
-------------------
* suppress boost::signals deprecation warning (`#362 <https://github.com/ros/ros_comm/issues/362>`_)

1.10.0 (2014-02-11)
-------------------

1.9.54 (2014-01-27)
-------------------

1.9.53 (2014-01-14)
-------------------
* add kwargs for message_filters.Subscriber

1.9.52 (2014-01-08)
-------------------

1.9.51 (2014-01-07)
-------------------
* update code after refactoring into rosbag_storage and roscpp_core (`#299 <https://github.com/ros/ros_comm/issues/299>`_)
* fix segmentation fault on OS X 10.9 (clang / libc++)

1.9.50 (2013-10-04)
-------------------

1.9.49 (2013-09-16)
-------------------

1.9.48 (2013-08-21)
-------------------

1.9.47 (2013-07-03)
-------------------
* check for CATKIN_ENABLE_TESTING to enable configure without tests

1.9.46 (2013-06-18)
-------------------

1.9.45 (2013-06-06)
-------------------
* fix template syntax for signal\_.template addCallback() to work with Intel compiler

1.9.44 (2013-03-21)
-------------------
* fix install destination for dll's under Windows

1.9.43 (2013-03-13)
-------------------
* fix exports of message filter symbols for Windows

1.9.42 (2013-03-08)
-------------------

1.9.41 (2013-01-24)
-------------------

1.9.40 (2013-01-13)
-------------------

1.9.39 (2012-12-29)
-------------------
* first public release for Groovy
