# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/overclock/openCV/ex2_9_pixel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/overclock/openCV/ex2_9_pixel/build

# Include any dependencies generated for this target.
include src/CMakeFiles/ex2_9_pixel.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ex2_9_pixel.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ex2_9_pixel.dir/flags.make

src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o: src/CMakeFiles/ex2_9_pixel.dir/flags.make
src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/overclock/openCV/ex2_9_pixel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o"
	cd /home/overclock/openCV/ex2_9_pixel/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex2_9_pixel.dir/main.cpp.o -c /home/overclock/openCV/ex2_9_pixel/src/main.cpp

src/CMakeFiles/ex2_9_pixel.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex2_9_pixel.dir/main.cpp.i"
	cd /home/overclock/openCV/ex2_9_pixel/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/overclock/openCV/ex2_9_pixel/src/main.cpp > CMakeFiles/ex2_9_pixel.dir/main.cpp.i

src/CMakeFiles/ex2_9_pixel.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex2_9_pixel.dir/main.cpp.s"
	cd /home/overclock/openCV/ex2_9_pixel/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/overclock/openCV/ex2_9_pixel/src/main.cpp -o CMakeFiles/ex2_9_pixel.dir/main.cpp.s

src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.requires:

.PHONY : src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.requires

src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.provides: src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/ex2_9_pixel.dir/build.make src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.provides.build
.PHONY : src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.provides

src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.provides.build: src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o


# Object files for target ex2_9_pixel
ex2_9_pixel_OBJECTS = \
"CMakeFiles/ex2_9_pixel.dir/main.cpp.o"

# External object files for target ex2_9_pixel
ex2_9_pixel_EXTERNAL_OBJECTS =

src/ex2_9_pixel: src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o
src/ex2_9_pixel: src/CMakeFiles/ex2_9_pixel.dir/build.make
src/ex2_9_pixel: /usr/local/lib/libopencv_stitching.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_superres.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_videostab.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_aruco.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_bgsegm.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_bioinspired.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_ccalib.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_dnn_objdetect.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_dpm.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_face.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_freetype.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_fuzzy.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_hfs.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_img_hash.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_line_descriptor.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_optflow.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_reg.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_rgbd.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_saliency.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_stereo.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_structured_light.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_surface_matching.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_tracking.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_xfeatures2d.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_ximgproc.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_xobjdetect.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_xphoto.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_shape.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_photo.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_calib3d.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_phase_unwrapping.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_video.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_datasets.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_plot.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_text.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_dnn.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_features2d.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_flann.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_highgui.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_ml.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_videoio.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_imgcodecs.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_objdetect.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_imgproc.so.3.4.2
src/ex2_9_pixel: /usr/local/lib/libopencv_core.so.3.4.2
src/ex2_9_pixel: src/CMakeFiles/ex2_9_pixel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/overclock/openCV/ex2_9_pixel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex2_9_pixel"
	cd /home/overclock/openCV/ex2_9_pixel/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex2_9_pixel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ex2_9_pixel.dir/build: src/ex2_9_pixel

.PHONY : src/CMakeFiles/ex2_9_pixel.dir/build

src/CMakeFiles/ex2_9_pixel.dir/requires: src/CMakeFiles/ex2_9_pixel.dir/main.cpp.o.requires

.PHONY : src/CMakeFiles/ex2_9_pixel.dir/requires

src/CMakeFiles/ex2_9_pixel.dir/clean:
	cd /home/overclock/openCV/ex2_9_pixel/build/src && $(CMAKE_COMMAND) -P CMakeFiles/ex2_9_pixel.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ex2_9_pixel.dir/clean

src/CMakeFiles/ex2_9_pixel.dir/depend:
	cd /home/overclock/openCV/ex2_9_pixel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/overclock/openCV/ex2_9_pixel /home/overclock/openCV/ex2_9_pixel/src /home/overclock/openCV/ex2_9_pixel/build /home/overclock/openCV/ex2_9_pixel/build/src /home/overclock/openCV/ex2_9_pixel/build/src/CMakeFiles/ex2_9_pixel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/ex2_9_pixel.dir/depend

