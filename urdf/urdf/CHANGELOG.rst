^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package urdf
^^^^^^^^^^^^^^^^^^^^^^^^^^

1.13.2 (2020-03-06)
-------------------
* Windows bringup. (`#31 <https://github.com/ros/urdf/issues/31>`_)
* update library install destination (`#28 <https://github.com/ros/urdf/issues/28>`_)
* Solved problem when static linking against urdf (`#25 <https://github.com/ros/urdf/issues/25>`_)
* unit test: add missing link name (`#26 <https://github.com/ros/urdf/issues/26>`_)
* update deprecated macro for MSVC (`#27 <https://github.com/ros/urdf/issues/27>`_)
* Contributors: James Xu, Robert Haschke, Sean Yen, ivanpauno

1.13.1 (2018-04-05)
-------------------
* Eliminate a deprecation warning by renaming class_loader.h -> class_loader.hpp (`#16 <https://github.com/ros/urdf/issues/16>`_)
* Make the pointers const for the new tinyxml2 APIs (`#15 <https://github.com/ros/urdf/issues/15>`_)
* Contributors: Chris Lalancette, Shane Loretz

1.13.0 (2018-03-19)
-------------------
* Add in TinyXML2 versions of the initXml API.
  Also add in some tests, and add in a deprecation warning
  for the TinyXML versions of the APIs.
* Add some tests for the 'initXml' family of methods.
* Small CMake fixups.
  In particular, make sure we define the correct define when
  building on WIN32.  Also do whitespace cleanup.
* Windows compatibility from ROS2.
* Style fixes from ROS2
* update links now that this is in its own repo (`#7 <https://github.com/ros/urdf/issues/7>`_)
* Contributors: Chris Lalancette, Dmitry Rozhkov, Mikael Arguedas

1.12.12 (2017-11-08)
--------------------
* Switched to package format 2 and made rostest a test_depend (`#221 <https://github.com/ros/robot_model/pull/221>`_)
* Made rostest a test_depend (`#221 <https://github.com/ros/robot_model/pull/221>`_)
* Added missing dependency on tinyxml (`#213 <https://github.com/ros/robot_model/pull/213>`_)
* Contributors: Chris Lalancette, Mikael Arguedas


1.12.11 (2017-06-27)
--------------------
* Shared ptr yakkety (`#207 <https://github.com/ros/robot_model/issues/207>`_)
  * Forward declare urdf::Model when urdfdom version is > 0.4
  * Add test for upcasting from urdf::ModelSharedPtr to urdf::ModelInterfaceSharedPtr
* Contributors: Shane Loretz

1.12.10 (2017-06-24)
--------------------
* Change urdf::Model to use std::shared_ptrs in urdfdom > v0.4 (`#206 <https://github.com/ros/robot_model/issues/206>`_)
* Contributors: Dave Coleman

1.12.9 (2017-04-26)
-------------------

1.12.8 (2017-03-27)
-------------------
* Allow supplying NodeHandle for initParam (`#168 <https://github.com/ros/robot_model/issues/168>`_)
  * Allow supplying NodeHandle for initParam using new function.
  * fixed missing return statement in previous commit.
* add Chris and Shane as maintainers (`#184 <https://github.com/ros/robot_model/issues/184>`_)
* fix missed mandatory -std=c++11 flag (`#181 <https://github.com/ros/robot_model/issues/181>`_)
  collada_parser,kdl_parser,urdf: add c++11 flag,
  collada_parser: replace typeof with ansi __typeof\_\_
  builded/tested on gentoo
  Thanks den4ix for the contribution!
* Contributors: Denis Romanchuk, Piyush Khandelwal, William Woodall

1.12.7 (2017-01-26)
-------------------

1.12.6 (2017-01-04)
-------------------
* Addressed gcc6 build error in the urdf package, forward port of `#156 <https://github.com/ros/robot_model/issues/156>`_ (`#173 <https://github.com/ros/robot_model/issues/173>`_)
* Now using ``urdf::*ShredPtr`` instead of ``boost::shared_ptr`` (`#144 <https://github.com/ros/robot_model/issues/144>`_)
* Contributors: Jochen Sprickerhof, William Woodall

1.12.5 (2016-10-27)
-------------------
* Added urdf_compatibility.h header to define SharedPtr types (`#160 <https://github.com/ros/robot_model/issues/160>`_)
  This provides portability for downstream packages allowing them to use urdfdom 0.3 or 0.4.
* urdf: Explicitly cast shared_ptr to bool in unit test. (`#158 <https://github.com/ros/robot_model/issues/158>`_)
* Add smart ptr typedefs (`#153 <https://github.com/ros/robot_model/issues/153>`_)
* Addressed gcc6 build error in urdf which was related to use of the isystem flag (`#157 <https://github.com/ros/robot_model/issues/157>`_)
* Remove unneeded dependency on libpcrecpp (`#155 <https://github.com/ros/robot_model/issues/155>`_)
* Contributors: Bence Magyar, Jochen Sprickerhof, Lukas Bulwahn, Maarten de Vries, Robert Haschke

1.12.4 (2016-08-23)
-------------------

1.12.3 (2016-06-10)
-------------------

1.12.2 (2016-04-12)
-------------------

1.12.1 (2016-04-10)
-------------------

1.11.8 (2015-09-11)
-------------------
* Removed pcre hack for newer released collada-dom.
* Fixed link order of libpcrecpp.
* Contributors: Kei Okada

1.11.7 (2015-04-22)
-------------------
* Removed the exporting of Boost and pcre as they are not used in the headers, and added TinyXML because it is.
* Fixed a bug with pcrecpp on Ubuntu > 13.04.
* Contributors: Kei Okada, William Woodall

1.11.6 (2014-11-30)
-------------------
* Add install for static libs needed for Android cross-compilation
* Contributors: Gary Servin

1.11.5 (2014-07-24)
-------------------

1.11.4 (2014-07-07)
-------------------
* moving to new dependency for urdfdom and urdfdom_headers. https://github.com/ros/rosdistro/issues/4633
* Contributors: Tully Foote

1.11.3 (2014-06-24)
-------------------
* fix urdfdom_headers find_package re `ros/rosdistro#4633 <https://github.com/ros/rosdistro/issues/4633>`_
* Contributors: Tully Foote

1.11.2 (2014-03-22)
-------------------

1.11.1 (2014-03-20)
-------------------

1.11.0 (2014-02-21)
-------------------
* fix urdf files for test
* fix test at urdf
* Contributors: YoheiKakiuchi

1.10.18 (2013-12-04)
--------------------
* add DEPENDS for kdl_parser
* Contributors: Ioan Sucan

1.10.16 (2013-11-18)
--------------------
* check for CATKIN_ENABLE_TESTING
* fix for using collada_parser_plugin

1.10.15 (2013-08-17)
--------------------
* fix `#30 <https://github.com/ros/robot_model/issues/30>`_
