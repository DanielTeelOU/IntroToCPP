# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "/Users/dannyteel/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6015.37/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/dannyteel/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/193.6015.37/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/dannyteel/Dev/C/C++/HW2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HW2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HW2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HW2.dir/flags.make

CMakeFiles/HW2.dir/q1.cpp.o: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/q1.cpp.o: ../q1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HW2.dir/q1.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW2.dir/q1.cpp.o -c /Users/dannyteel/Dev/C/C++/HW2/q1.cpp

CMakeFiles/HW2.dir/q1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/q1.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dannyteel/Dev/C/C++/HW2/q1.cpp > CMakeFiles/HW2.dir/q1.cpp.i

CMakeFiles/HW2.dir/q1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/q1.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dannyteel/Dev/C/C++/HW2/q1.cpp -o CMakeFiles/HW2.dir/q1.cpp.s

CMakeFiles/HW2.dir/q2.cpp.o: CMakeFiles/HW2.dir/flags.make
CMakeFiles/HW2.dir/q2.cpp.o: ../q2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/HW2.dir/q2.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HW2.dir/q2.cpp.o -c /Users/dannyteel/Dev/C/C++/HW2/q2.cpp

CMakeFiles/HW2.dir/q2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HW2.dir/q2.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/dannyteel/Dev/C/C++/HW2/q2.cpp > CMakeFiles/HW2.dir/q2.cpp.i

CMakeFiles/HW2.dir/q2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HW2.dir/q2.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/dannyteel/Dev/C/C++/HW2/q2.cpp -o CMakeFiles/HW2.dir/q2.cpp.s

# Object files for target HW2
HW2_OBJECTS = \
"CMakeFiles/HW2.dir/q1.cpp.o" \
"CMakeFiles/HW2.dir/q2.cpp.o"

# External object files for target HW2
HW2_EXTERNAL_OBJECTS =

HW2: CMakeFiles/HW2.dir/q1.cpp.o
HW2: CMakeFiles/HW2.dir/q2.cpp.o
HW2: CMakeFiles/HW2.dir/build.make
HW2: CMakeFiles/HW2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable HW2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HW2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HW2.dir/build: HW2

.PHONY : CMakeFiles/HW2.dir/build

CMakeFiles/HW2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HW2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HW2.dir/clean

CMakeFiles/HW2.dir/depend:
	cd /Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/dannyteel/Dev/C/C++/HW2 /Users/dannyteel/Dev/C/C++/HW2 /Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug /Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug /Users/dannyteel/Dev/C/C++/HW2/cmake-build-debug/CMakeFiles/HW2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HW2.dir/depend

