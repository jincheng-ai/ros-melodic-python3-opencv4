^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package rqt_plot
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

0.4.13 (2021-02-23)
-------------------
* Fix resize bug. Set minimum size of MatDataPlot's Canvas (`#69 <https://github.com/ros-visualization/rqt_plot/issues/69>`_)
* Update maintainers
* Replace string.atoi with int() (`#57 <https://github.com/ros-visualization/rqt_plot/issues/57>`_)
* Contributors: Felix Exner, Mabel Zhang, Robert Haschke

0.4.12 (2020-05-22)
-------------------
* readd rqt_plot global executable, regression from 0.4.11 (`#60 <https://github.com/ros-visualization/rqt_plot/issues/60>`_)

0.4.11 (2020-05-20)
-------------------
* use catkin_install_python() (`#59 <https://github.com/ros-visualization/rqt_plot/issues/59>`_)
* fix "bottom cannot be >= top" matplotlib error (`#52 <https://github.com/ros-visualization/rqt_plot/issues/52>`_)

0.4.10 (2020-03-11)
-------------------
* bump CMake minimum version to avoid CMP0048 warning
* add Python 3 conditional dependencies (`#41 <https://github.com/ros-visualization/rqt_plot/issues/41>`_)
* fix KeyError when curves are removed concurrently (`#37 <https://github.com/ros-visualization/rqt_plot/issues/37>`_)

0.4.9 (2019-03-14)
------------------
* avoid crash for unknown message types (`#26 <https://github.com/ros-visualization/rqt_plot/issues/26>`_)
* autopep8 (`#15 <https://github.com/ros-visualization/rqt_plot/issues/15>`_)
* support pyqtgraph < 0.10 (`#13 <https://github.com/ros-visualization/rqt_plot/issues/13>`_)

0.4.8 (2017-04-24)
------------------
* add scroll area when showing images with 1-to-1 mapping (`#433 <https://github.com/ros-visualization/rqt_common_plugins/issues/433>`_)

0.4.7 (2017-03-02)
------------------

0.4.6 (2017-02-27)
------------------
* add support for plotting bool field values (`#427 <https://github.com/ros-visualization/rqt_common_plugins/issues/427>`_)

0.4.5 (2017-02-03)
------------------

0.4.4 (2017-01-24)
------------------
* automatically use the value field from std_msgs.Bool messages (`#420 <https://github.com/ros-visualization/rqt_common_plugins/pull/420>`_)
* use Python 3 compatible syntax (`#421 <https://github.com/ros-visualization/rqt_common_plugins/pull/421>`_)
* reenable PyQtGraph when version >= 0.10 (`#407 <https://github.com/ros-visualization/rqt_common_plugins/issues/407>`_)

0.4.3 (2016-11-02)
------------------

0.4.2 (2016-09-19)
------------------
* add keyword arg to make sort optional (`#360 <https://github.com/ros-visualization/rqt_common_plugins/pull/360>`_)
* disable PyQtGraph backend when Qt 5 is being used (`#399 <https://github.com/ros-visualization/rqt_common_plugins/pull/399>`_)
* add missing dependency on numpy (`#396 <https://github.com/ros-visualization/rqt_common_plugins/issues/396>`_)

0.4.1 (2016-05-16)
------------------
* fix mouse wheel delta in Qt 5 (`#376 <https://github.com/ros-visualization/rqt_common_plugins/issues/376>`_)

0.4.0 (2016-04-27)
------------------
* Support Qt 5 (in Kinetic and higher) as well as Qt 4 (in Jade and earlier) (`#359 <https://github.com/ros-visualization/rqt_common_plugins/pull/359>`_)
* support matplotplot 1.5 (`#358 <https://github.com/ros-visualization/rqt_common_plugins/pull/358>`_)

0.3.13 (2016-03-08)
-------------------
* Added missing include
* use proper icon names for add/remove
* Contributors: Jochen Sprickerhof, Vincent Rabaud

0.3.12 (2015-07-24)
-------------------

0.3.11 (2015-04-30)
-------------------
* save and restore axes settings (`#234 <https://github.com/ros-visualization/rqt_common_plugins/issues/234>`_)
* remove warning when backend is not found (`#301 <https://github.com/ros-visualization/rqt_common_plugins/issues/301>`_)
* fix version clash for matplot backend when PyQt5 is installed (`#299 <https://github.com/ros-visualization/rqt_common_plugins/pull/200>`_)

0.3.10 (2014-10-01)
-------------------
* update plugin scripts to use full name to avoid future naming collisions

0.3.9 (2014-08-18)
------------------
* fix handling of variable-sized arrays (`#261 <https://github.com/ros-visualization/rqt_common_plugins/issues/261>`_)

0.3.8 (2014-07-15)
------------------
* fix missing installation of Python subpackage

0.3.7 (2014-07-11)
------------------
* fix missing import (`#248 <https://github.com/ros-visualization/rqt_common_plugins/issues/248>`_)
* significant improvements and unification of different plot backends (`#239 <https://github.com/ros-visualization/rqt_common_plugins/issues/239>`_, `#231 <https://github.com/ros-visualization/rqt_common_plugins/issues/231>`_)
* make more things plottable including arrays and simple message types (`#246 <https://github.com/ros-visualization/rqt_common_plugins/issues/246>`_)
* make DataPlot a proxy for its plot widget, redraw after loading new data, add clear_values (`#236 <https://github.com/ros-visualization/rqt_common_plugins/issues/236>`_)
* export architecture_independent flag in package.xml (`#254 <https://github.com/ros-visualization/rqt_common_plugins/issues/254>`_)

0.3.6 (2014-06-02)
------------------
* subscribe to any known topic, even if currently not available (`#233 <https://github.com/ros-visualization/rqt_common_plugins/pull/233>`_)

0.3.5 (2014-05-07)
------------------
* change minimum padding to enable viewing arbitrarily small values (`#223 <https://github.com/ros-visualization/rqt_common_plugins/pull/223>`_)
* redraw plot only on new data to reduce cpu load, especially with matplot (`#219 <https://github.com/ros-visualization/rqt_common_plugins/issues/219>`_)

0.3.4 (2014-01-28)
------------------

0.3.3 (2014-01-08)
------------------
* add groups for rqt plugins, renamed some plugins (`#167 <https://github.com/ros-visualization/rqt_common_plugins/issues/167>`_)
* add checkbox to toggle automatic scrolling of plot with data
* add simple legend for pyqtgraph backend

0.3.2 (2013-10-14)
------------------

0.3.1 (2013-10-09)
------------------

0.3.0 (2013-08-28)
------------------
* fix waiting on unpublished topics (`#110 <https://github.com/ros-visualization/rqt_common_plugins/issues/110>`_)
* fix rendering of icons on OS X (`ros-visualization/rqt#83 <https://github.com/ros-visualization/rqt/issues/83>`_)

0.2.17 (2013-07-04)
-------------------

0.2.16 (2013-04-09 13:33)
-------------------------

0.2.15 (2013-04-09 00:02)
-------------------------

0.2.14 (2013-03-14)
-------------------

0.2.13 (2013-03-11 22:14)
-------------------------

0.2.12 (2013-03-11 13:56)
-------------------------

0.2.11 (2013-03-08)
-------------------

0.2.10 (2013-01-22)
-------------------

0.2.9 (2013-01-17)
------------------

0.2.8 (2013-01-11)
------------------
* command line arguments enabled

0.2.7 (2012-12-24)
------------------
* update mat plot, remove usage of collections and numpy, calculate y range once when adding data instead of on draw (`ros-visualization/rqt#48 <https://github.com/ros-visualization/rqt/issues/48>`_)
* automatically adjust margins for matplot on resize

0.2.6 (2012-12-23)
------------------

0.2.5 (2012-12-21 19:11)
------------------------

0.2.4 (2012-12-21 01:13)
------------------------

0.2.3 (2012-12-21 00:24)
------------------------

0.2.2 (2012-12-20 18:29)
------------------------

0.2.1 (2012-12-20 17:47)
------------------------

0.2.0 (2012-12-20 17:39)
------------------------
* first release of this package into groovy
