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
CMAKE_SOURCE_DIR = /Users/zhangcong/Desktop/Ccode/Function

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Function.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Function.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Function.dir/flags.make

CMakeFiles/Function.dir/main.c.o: CMakeFiles/Function.dir/flags.make
CMakeFiles/Function.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Function.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Function.dir/main.c.o -c /Users/zhangcong/Desktop/Ccode/Function/main.c

CMakeFiles/Function.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Function.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/zhangcong/Desktop/Ccode/Function/main.c > CMakeFiles/Function.dir/main.c.i

CMakeFiles/Function.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Function.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/zhangcong/Desktop/Ccode/Function/main.c -o CMakeFiles/Function.dir/main.c.s

# Object files for target Function
Function_OBJECTS = \
"CMakeFiles/Function.dir/main.c.o"

# External object files for target Function
Function_EXTERNAL_OBJECTS =

Function: CMakeFiles/Function.dir/main.c.o
Function: CMakeFiles/Function.dir/build.make
Function: CMakeFiles/Function.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Function"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Function.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Function.dir/build: Function
.PHONY : CMakeFiles/Function.dir/build

CMakeFiles/Function.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Function.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Function.dir/clean

CMakeFiles/Function.dir/depend:
	cd /Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/zhangcong/Desktop/Ccode/Function /Users/zhangcong/Desktop/Ccode/Function /Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug /Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug /Users/zhangcong/Desktop/Ccode/Function/cmake-build-debug/CMakeFiles/Function.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Function.dir/depend
