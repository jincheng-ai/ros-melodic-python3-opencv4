# ros-melodic-python3-opencv4

this is a desktop-full ros on melodic version compiled with python3 and opencv 4

[offical wiki](https://wiki.ros.org/melodic/Installation/Source)

## Installing bootstrap dependencies

```
sudo apt install python3-rosdep python3-rosdistro python3-rosinstall-generator python3-vcstool python3-rosinstall build-essential
```

### for python_orocos_kdl 

```
sudo apt install python3-sip-dev
```

## install source

### create a catkin workspace

```
mkdir ~/ros_catkin_ws
cd ~/ros_catkin_ws
```

### install with rosinstall_generator and vcs

```
rosinstall_generator desktop_full --rosdistro melodic --deps --tar > melodic-desktop-full.rosinstall
mkdir src
vcs import src < melodic-desktop-full.rosinstall
```

### resolving dependencies

```
rosdep install --from-paths src --ignore-src --rosdistro melodic -y
```

some `python-ros*` packages should be installed such as `python-rospkg`. I don't konw why and what the impact will be.

### building the catkin workspace

```
./src/catkin/bin/catkin_make_isolated --install -DCMAKE_BUILD_TYPE=Release -DPYTHON_EXECUTABLE=/usr/bin/python
```

## Q&A

### qt_gui_cpp

```
sip: Usage: sip [-h] [-V] [-a file] [-b file] [-B tag] [-c dir] [-d file] [-D] [-e] [-f] [-g] [-I dir] [-j #] [-k] [-m file] [-o] [-p module] [-P] [-r] [-s suffix] [-t tag] [-w] [-x feature] [-X id:file] [-y file] [-z file] [@file] [file]
```

the cmd is

```
/usr/bin/sip -c /home/shuyuanhao/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip -b /home/shuyuanhao/ros_catkin_ws/build_isolated/qt_gui_cpp/sip/qt_gui_cpp_sip/pyqtscripting.sbf -I /usr/share/sip/PyQt5 -w -n PyQt5.sip -t Qt_5_9_5 -t WS_X11 -x PyQt_WebChannel -x PyQt_Desktop_OpenGL qt_gui_cpp.sip
```

change `sip_flags` in `ros_catkin_ws/src/python_qt_binding/cmake/sip_configure.py` as 
```
sip_flags = sip_flags.replace('-n PyQt5.sip ', '')
print(sip_flags)
cmd += sip_flags.split(' ')
cmd.append(sip_file)
print(cmd)
subprocess.check_call(cmd)
```
### cv_bridge adapt to opencv 4

change `CMakeLists.txt`, use ubuntu 18.04 defualt opencv 4.1.1

```
#find_package(OpenCV 3 REQUIRED
#  COMPONENTS
#    opencv_core
#    opencv_imgproc
#    opencv_imgcodecs
#  CONFIG
#)
# set(OpenCV_DIR "/home/shuyuanhao/opencvlib/4.5.2/share/opencv4/")
find_package(OpenCV 4 REQUIRED
  COMPONENTS
    opencv_core
    opencv_imgproc
    opencv_imgcodecs
  CONFIG
)
```

### image_publisher adapt to opencv 4

see [offical code](https://github.com/ros-perception/image_pipeline/commit/2f27cd068c0a17c83afaf6d0722002f53a96411b) 

