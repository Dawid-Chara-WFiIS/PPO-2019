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
CMAKE_SOURCE_DIR = /home/dawid/PPO2019/Lab11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dawid/PPO2019/Lab11/build

# Include any dependencies generated for this target.
include CMakeFiles/box.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/box.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/box.dir/flags.make

CMakeFiles/box.dir/Main.cpp.o: CMakeFiles/box.dir/flags.make
CMakeFiles/box.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PPO2019/Lab11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/box.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/box.dir/Main.cpp.o -c /home/dawid/PPO2019/Lab11/Main.cpp

CMakeFiles/box.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/box.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PPO2019/Lab11/Main.cpp > CMakeFiles/box.dir/Main.cpp.i

CMakeFiles/box.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/box.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PPO2019/Lab11/Main.cpp -o CMakeFiles/box.dir/Main.cpp.s

CMakeFiles/box.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/box.dir/Main.cpp.o.requires

CMakeFiles/box.dir/Main.cpp.o.provides: CMakeFiles/box.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/box.dir/build.make CMakeFiles/box.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/box.dir/Main.cpp.o.provides

CMakeFiles/box.dir/Main.cpp.o.provides.build: CMakeFiles/box.dir/Main.cpp.o


CMakeFiles/box.dir/src/BContainer.cpp.o: CMakeFiles/box.dir/flags.make
CMakeFiles/box.dir/src/BContainer.cpp.o: ../src/BContainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PPO2019/Lab11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/box.dir/src/BContainer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/box.dir/src/BContainer.cpp.o -c /home/dawid/PPO2019/Lab11/src/BContainer.cpp

CMakeFiles/box.dir/src/BContainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/box.dir/src/BContainer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PPO2019/Lab11/src/BContainer.cpp > CMakeFiles/box.dir/src/BContainer.cpp.i

CMakeFiles/box.dir/src/BContainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/box.dir/src/BContainer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PPO2019/Lab11/src/BContainer.cpp -o CMakeFiles/box.dir/src/BContainer.cpp.s

CMakeFiles/box.dir/src/BContainer.cpp.o.requires:

.PHONY : CMakeFiles/box.dir/src/BContainer.cpp.o.requires

CMakeFiles/box.dir/src/BContainer.cpp.o.provides: CMakeFiles/box.dir/src/BContainer.cpp.o.requires
	$(MAKE) -f CMakeFiles/box.dir/build.make CMakeFiles/box.dir/src/BContainer.cpp.o.provides.build
.PHONY : CMakeFiles/box.dir/src/BContainer.cpp.o.provides

CMakeFiles/box.dir/src/BContainer.cpp.o.provides.build: CMakeFiles/box.dir/src/BContainer.cpp.o


CMakeFiles/box.dir/src/Box.cpp.o: CMakeFiles/box.dir/flags.make
CMakeFiles/box.dir/src/Box.cpp.o: ../src/Box.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PPO2019/Lab11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/box.dir/src/Box.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/box.dir/src/Box.cpp.o -c /home/dawid/PPO2019/Lab11/src/Box.cpp

CMakeFiles/box.dir/src/Box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/box.dir/src/Box.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PPO2019/Lab11/src/Box.cpp > CMakeFiles/box.dir/src/Box.cpp.i

CMakeFiles/box.dir/src/Box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/box.dir/src/Box.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PPO2019/Lab11/src/Box.cpp -o CMakeFiles/box.dir/src/Box.cpp.s

CMakeFiles/box.dir/src/Box.cpp.o.requires:

.PHONY : CMakeFiles/box.dir/src/Box.cpp.o.requires

CMakeFiles/box.dir/src/Box.cpp.o.provides: CMakeFiles/box.dir/src/Box.cpp.o.requires
	$(MAKE) -f CMakeFiles/box.dir/build.make CMakeFiles/box.dir/src/Box.cpp.o.provides.build
.PHONY : CMakeFiles/box.dir/src/Box.cpp.o.provides

CMakeFiles/box.dir/src/Box.cpp.o.provides.build: CMakeFiles/box.dir/src/Box.cpp.o


CMakeFiles/box.dir/src/Volume.cpp.o: CMakeFiles/box.dir/flags.make
CMakeFiles/box.dir/src/Volume.cpp.o: ../src/Volume.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PPO2019/Lab11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/box.dir/src/Volume.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/box.dir/src/Volume.cpp.o -c /home/dawid/PPO2019/Lab11/src/Volume.cpp

CMakeFiles/box.dir/src/Volume.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/box.dir/src/Volume.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PPO2019/Lab11/src/Volume.cpp > CMakeFiles/box.dir/src/Volume.cpp.i

CMakeFiles/box.dir/src/Volume.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/box.dir/src/Volume.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PPO2019/Lab11/src/Volume.cpp -o CMakeFiles/box.dir/src/Volume.cpp.s

CMakeFiles/box.dir/src/Volume.cpp.o.requires:

.PHONY : CMakeFiles/box.dir/src/Volume.cpp.o.requires

CMakeFiles/box.dir/src/Volume.cpp.o.provides: CMakeFiles/box.dir/src/Volume.cpp.o.requires
	$(MAKE) -f CMakeFiles/box.dir/build.make CMakeFiles/box.dir/src/Volume.cpp.o.provides.build
.PHONY : CMakeFiles/box.dir/src/Volume.cpp.o.provides

CMakeFiles/box.dir/src/Volume.cpp.o.provides.build: CMakeFiles/box.dir/src/Volume.cpp.o


# Object files for target box
box_OBJECTS = \
"CMakeFiles/box.dir/Main.cpp.o" \
"CMakeFiles/box.dir/src/BContainer.cpp.o" \
"CMakeFiles/box.dir/src/Box.cpp.o" \
"CMakeFiles/box.dir/src/Volume.cpp.o"

# External object files for target box
box_EXTERNAL_OBJECTS =

box: CMakeFiles/box.dir/Main.cpp.o
box: CMakeFiles/box.dir/src/BContainer.cpp.o
box: CMakeFiles/box.dir/src/Box.cpp.o
box: CMakeFiles/box.dir/src/Volume.cpp.o
box: CMakeFiles/box.dir/build.make
box: CMakeFiles/box.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dawid/PPO2019/Lab11/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable box"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/box.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/box.dir/build: box

.PHONY : CMakeFiles/box.dir/build

CMakeFiles/box.dir/requires: CMakeFiles/box.dir/Main.cpp.o.requires
CMakeFiles/box.dir/requires: CMakeFiles/box.dir/src/BContainer.cpp.o.requires
CMakeFiles/box.dir/requires: CMakeFiles/box.dir/src/Box.cpp.o.requires
CMakeFiles/box.dir/requires: CMakeFiles/box.dir/src/Volume.cpp.o.requires

.PHONY : CMakeFiles/box.dir/requires

CMakeFiles/box.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/box.dir/cmake_clean.cmake
.PHONY : CMakeFiles/box.dir/clean

CMakeFiles/box.dir/depend:
	cd /home/dawid/PPO2019/Lab11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dawid/PPO2019/Lab11 /home/dawid/PPO2019/Lab11 /home/dawid/PPO2019/Lab11/build /home/dawid/PPO2019/Lab11/build /home/dawid/PPO2019/Lab11/build/CMakeFiles/box.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/box.dir/depend

