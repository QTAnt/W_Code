# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/zhangcong/Desktop/Ccode/Arr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Arr.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Arr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Arr.dir/flags.make

CMakeFiles/Arr.dir/main.c.o: CMakeFiles/Arr.dir/flags.make
CMakeFiles/Arr.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Arr.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Arr.dir/main.c.o -c /Users/zhangcong/Desktop/Ccode/Arr/main.c

CMakeFiles/Arr.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Arr.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zhangcong/Desktop/Ccode/Arr/main.c > CMakeFiles/Arr.dir/main.c.i

CMakeFiles/Arr.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Arr.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zhangcong/Desktop/Ccode/Arr/main.c -o CMakeFiles/Arr.dir/main.c.s

# Object files for target Arr
Arr_OBJECTS = \
"CMakeFiles/Arr.dir/main.c.o"

# External object files for target Arr
Arr_EXTERNAL_OBJECTS =

Arr: CMakeFiles/Arr.dir/main.c.o
Arr: CMakeFiles/Arr.dir/build.make
Arr: CMakeFiles/Arr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Arr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Arr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Arr.dir/build: Arr
.PHONY : CMakeFiles/Arr.dir/build

CMakeFiles/Arr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Arr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Arr.dir/clean

CMakeFiles/Arr.dir/depend:
	cd /Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangcong/Desktop/Ccode/Arr /Users/zhangcong/Desktop/Ccode/Arr /Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug /Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug /Users/zhangcong/Desktop/Ccode/Arr/cmake-build-debug/CMakeFiles/Arr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Arr.dir/depend

