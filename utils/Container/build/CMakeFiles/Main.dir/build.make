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
CMAKE_SOURCE_DIR = /home/dawid/PPO2019/utils/Container

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dawid/PPO2019/utils/Container/build

# Include any dependencies generated for this target.
include CMakeFiles/Main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Main.dir/flags.make

CMakeFiles/Main.dir/Main.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PPO2019/utils/Container/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Main.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/Main.cpp.o -c /home/dawid/PPO2019/utils/Container/Main.cpp

CMakeFiles/Main.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PPO2019/utils/Container/Main.cpp > CMakeFiles/Main.dir/Main.cpp.i

CMakeFiles/Main.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PPO2019/utils/Container/Main.cpp -o CMakeFiles/Main.dir/Main.cpp.s

CMakeFiles/Main.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/Main.dir/Main.cpp.o.requires

CMakeFiles/Main.dir/Main.cpp.o.provides: CMakeFiles/Main.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/Main.cpp.o.provides

CMakeFiles/Main.dir/Main.cpp.o.provides.build: CMakeFiles/Main.dir/Main.cpp.o


CMakeFiles/Main.dir/src/Container.cpp.o: CMakeFiles/Main.dir/flags.make
CMakeFiles/Main.dir/src/Container.cpp.o: ../src/Container.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dawid/PPO2019/utils/Container/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Main.dir/src/Container.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Main.dir/src/Container.cpp.o -c /home/dawid/PPO2019/utils/Container/src/Container.cpp

CMakeFiles/Main.dir/src/Container.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Main.dir/src/Container.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dawid/PPO2019/utils/Container/src/Container.cpp > CMakeFiles/Main.dir/src/Container.cpp.i

CMakeFiles/Main.dir/src/Container.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Main.dir/src/Container.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dawid/PPO2019/utils/Container/src/Container.cpp -o CMakeFiles/Main.dir/src/Container.cpp.s

CMakeFiles/Main.dir/src/Container.cpp.o.requires:

.PHONY : CMakeFiles/Main.dir/src/Container.cpp.o.requires

CMakeFiles/Main.dir/src/Container.cpp.o.provides: CMakeFiles/Main.dir/src/Container.cpp.o.requires
	$(MAKE) -f CMakeFiles/Main.dir/build.make CMakeFiles/Main.dir/src/Container.cpp.o.provides.build
.PHONY : CMakeFiles/Main.dir/src/Container.cpp.o.provides

CMakeFiles/Main.dir/src/Container.cpp.o.provides.build: CMakeFiles/Main.dir/src/Container.cpp.o


# Object files for target Main
Main_OBJECTS = \
"CMakeFiles/Main.dir/Main.cpp.o" \
"CMakeFiles/Main.dir/src/Container.cpp.o"

# External object files for target Main
Main_EXTERNAL_OBJECTS =

Main: CMakeFiles/Main.dir/Main.cpp.o
Main: CMakeFiles/Main.dir/src/Container.cpp.o
Main: CMakeFiles/Main.dir/build.make
Main: CMakeFiles/Main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dawid/PPO2019/utils/Container/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Main.dir/build: Main

.PHONY : CMakeFiles/Main.dir/build

CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/Main.cpp.o.requires
CMakeFiles/Main.dir/requires: CMakeFiles/Main.dir/src/Container.cpp.o.requires

.PHONY : CMakeFiles/Main.dir/requires

CMakeFiles/Main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Main.dir/clean

CMakeFiles/Main.dir/depend:
	cd /home/dawid/PPO2019/utils/Container/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dawid/PPO2019/utils/Container /home/dawid/PPO2019/utils/Container /home/dawid/PPO2019/utils/Container/build /home/dawid/PPO2019/utils/Container/build /home/dawid/PPO2019/utils/Container/build/CMakeFiles/Main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Main.dir/depend

