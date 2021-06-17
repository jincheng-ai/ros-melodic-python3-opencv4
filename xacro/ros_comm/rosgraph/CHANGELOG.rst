^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package rosgraph
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.14.11 (2021-04-26)
--------------------
* Fix HTTP for kernel < 4.16 (`#2132 <https://github.com/ros/ros_comm/issues/2132>`_)
* Contributors: Emerson Knapp, Jesse Ikawa

1.14.10 (2020-10-16)
--------------------
* Update maintainers (`#2075 <https://github.com/ros/ros_comm/issues/2075>`_)
* Fix spelling (`#2066 <https://github.com/ros/ros_comm/issues/2066>`_)
* Contributors: Jacob Perron, Shane Loretz, tomoya

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
* add default ROS_MASTER_URI (`#1666 <https://github.com/ros/ros_comm/issues/1666>`_)
* fix test which fails on Noetic (`#1891 <https://github.com/ros/ros_comm/issues/1891>`_)
* bump CMake minimum version to avoid CMP0048 warning (`#1869 <https://github.com/ros/ros_comm/issues/1869>`_)
* [Windows] Python 3 compatibility (`#1819 <https://github.com/ros/ros_comm/issues/1819>`_)
* fix escape sequences in regular expressions (`#1837 <https://github.com/ros/ros_comm/issues/1837>`_)
* fix RospyLogger findCaller arguments in Python 3.8 (`#1838 <https://github.com/ros/ros_comm/issues/1838>`_)
* [Windows] make test code to be more portable (`#1726 <https://github.com/ros/ros_comm/issues/1726>`_)
* fix Coverity forward null (`#1787 <https://github.com/ros/ros_comm/issues/1787>`_)
* make log config from rosgraph optional (`#1797 <https://github.com/ros/ros_comm/issues/1797>`_)
* use condition attributes to specify Python 2 and 3 dependencies (`#1792 <https://github.com/ros/ros_comm/issues/1792>`_)
* add is_legal_remap() to rosgraph to make remap-detection more precise (`#1683 <https://github.com/ros/ros_comm/issues/1683>`_)
* more Python 3 compatibility (`#1783 <https://github.com/ros/ros_comm/issues/1783>`_)
* more Python 3 compatibility (`#1782 <https://github.com/ros/ros_comm/issues/1782>`_)
* switch to yaml.safe_load(_all) to prevent YAMLLoadWarning (`#1688 <https://github.com/ros/ros_comm/issues/1688>`_)
* use urlparse for parsing the port, whick makes ipv6 possible (`#1698 <https://github.com/ros/ros_comm/issues/1698>`_)
* fix paths (and regex for paths) comparison issues (`#1592 <https://github.com/ros/ros_comm/issues/1592>`_)
* fix various test problems (`#1601 <https://github.com/ros/ros_comm/issues/1601>`_)
* fix typos: awhile -> a while (`#1534 <https://github.com/ros/ros_comm/issues/1534>`_)

1.14.3 (2018-08-06)
-------------------

1.14.2 (2018-06-06)
-------------------

1.14.1 (2018-05-21)
-------------------

1.14.0 (2018-05-21)
-------------------
* use HTTP/1.1 in XMLRPC Server (`#1287 <https://github.com/ros/ros_comm/issues/1287>`_)

1.13.6 (2018-02-05)
-------------------
* fix search strategy for python_logging config (`#1292 <https://github.com/ros/ros_comm/issues/1292>`_)

1.13.5 (2017-11-09)
-------------------

1.13.4 (2017-11-02)
-------------------

1.13.3 (2017-10-25)
-------------------
* use defined error codes rather than hardcoded integers (`#1174 <https://github.com/ros/ros_comm/issues/1174>`_)
* improve logger tests (`#1144 <https://github.com/ros/ros_comm/issues/1144>`_)

1.13.2 (2017-08-15)
-------------------
* fix stack frame identification in rospy logging (`#1141 <https://github.com/ros/ros_comm/issues/1141>`_, regression from 1.13.1)
* make RospyLogger.findCaller compatible with Python 3 (`#1121 <https://github.com/ros/ros_comm/issues/1121>`_)

1.13.1 (2017-07-27)
-------------------
* improve message when `roslogging` cannot change permissions (`#1068 <https://github.com/ros/ros_comm/issues/1068>`_)
* allow python_logging.yaml for logging configuration (`#1061 <https://github.com/ros/ros_comm/issues/1061>`_)
* write log for class method with class name (`#1043 <https://github.com/ros/ros_comm/issues/1043>`_)

1.13.0 (2017-02-22)
-------------------

1.12.7 (2017-02-17)
-------------------

1.12.6 (2016-10-26)
-------------------
* change rospy default rosconsole format for consistency with roscpp (`#879 <https://github.com/ros/ros_comm/pull/879>`_)
* increase request_queue_size for xmlrpc server (`#849 <https://github.com/ros/ros_comm/issues/849>`_)

1.12.5 (2016-09-30)
-------------------

1.12.4 (2016-09-19)
-------------------

1.12.3 (2016-09-17)
-------------------
* add 'Darwin' to unix-like platforms improving address resolution (`#846 <https://github.com/ros/ros_comm/pull/846>`_)
* use logging Formatter, enabling printing exception info with exc_info=1 (`#828 <https://github.com/ros/ros_comm/pull/828>`_)
* add `__contains_\_`, which is a better spelling of `has` (`#754 <https://github.com/ros/ros_comm/pull/754>`_)

1.12.2 (2016-06-03)
-------------------
* avoid creating a latest symlink for the root of the log dir (`#795 <https://github.com/ros/ros_comm/pull/795>`_)

1.12.1 (2016-04-18)
-------------------
* fix str conversion in encode_ros_handshake_header (`#792 <https://github.com/ros/ros_comm/pull/792>`_)

1.12.0 (2016-03-18)
-------------------

1.11.18 (2016-03-17)
--------------------

1.11.17 (2016-03-11)
--------------------
* fix raising classes not derived from `Exception` which caused a TypeError (`#761 <https://github.com/ros/ros_comm/pull/761>`_)
* fix handshake header with Python 3 (`#759 <https://github.com/ros/ros_comm/issues/759>`_)
* fix encoding of header fields (`#704 <https://github.com/ros/ros_comm/issues/704>`_)

1.11.16 (2015-11-09)
--------------------

1.11.15 (2015-10-13)
--------------------

1.11.14 (2015-09-19)
--------------------
* create a symlink to the latest log directory (`#659 <https://github.com/ros/ros_comm/pull/659>`_)

1.11.13 (2015-04-28)
--------------------

1.11.12 (2015-04-27)
--------------------

1.11.11 (2015-04-16)
--------------------

1.11.10 (2014-12-22)
--------------------
* rosconsole format for rospy (`#517 <https://github.com/ros/ros_comm/issues/517>`_)
* fix exception at roscore startup if python has IPv6 disabled (`#515 <https://github.com/ros/ros_comm/issues/515>`_)

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
* Python 3 compatibility (`#426 <https://github.com/ros/ros_comm/issues/426>`_, `#427 <https://github.com/ros/ros_comm/issues/427>`_, `#429 <https://github.com/ros/ros_comm/issues/429>`_)

1.11.3 (2014-05-21)
-------------------

1.11.2 (2014-05-08)
-------------------

1.11.1 (2014-05-07)
-------------------
* add architecture_independent flag in package.xml (`#391 <https://github.com/ros/ros_comm/issues/391>`_)

1.11.0 (2014-03-04)
-------------------
* use catkin_install_python() to install Python scripts (`#361 <https://github.com/ros/ros_comm/issues/361>`_)

1.10.0 (2014-02-11)
-------------------

1.9.54 (2014-01-27)
-------------------

1.9.53 (2014-01-14)
-------------------

1.9.52 (2014-01-08)
-------------------

1.9.51 (2014-01-07)
-------------------
* allow different 127. addresses than 127.0.0.1 (`#315 <https://github.com/ros/ros_comm/issues/315>`_)
* work around for nose 1.3.0 bug (`#323 <https://github.com/ros/ros_comm/issues/323>`_)

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
* add warnings for obviously wrong environment variables ROS_HOSTNAME and ROS_IP (`#134 <https://github.com/ros/ros_comm/issues/134>`_)
* fix exception on netifaces.ifaddresses() (`#211 <https://github.com/ros/ros_comm/issues/211>`_, `#213 <https://github.com/ros/ros_comm/issues/213>`_) (regression from 1.9.42)

1.9.44 (2013-03-21)
-------------------

1.9.43 (2013-03-13)
-------------------

1.9.42 (2013-03-08)
-------------------
* replace custom code with Python module netifaces (`#130 <https://github.com/ros/ros_comm/issues/130>`_)
* make dependencies on rospy optional by refactoring RosStreamHandler to rosgraph (`#179 <https://github.com/ros/ros_comm/issues/179>`_)

1.9.41 (2013-01-24)
-------------------

1.9.40 (2013-01-13)
-------------------
* add colorization for rospy log output (`#3691 <https://code.ros.org/trac/ros/ticket/3691>`_)

1.9.39 (2012-12-29)
-------------------
* first public release for Groovy
