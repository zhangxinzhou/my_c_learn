# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Administrator\CLionProjects\c_learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Administrator\CLionProjects\c_learn\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/demo_10.17.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/demo_10.17.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/demo_10.17.dir/flags.make

CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.obj: CMakeFiles/demo_10.17.dir/flags.make
CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.obj: ../charpter10/demo_10.17.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Administrator\CLionProjects\c_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.obj"
	D:\dev\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\demo_10.17.dir\charpter10\demo_10.17.c.obj   -c C:\Users\Administrator\CLionProjects\c_learn\charpter10\demo_10.17.c

CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.i"
	D:\dev\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Administrator\CLionProjects\c_learn\charpter10\demo_10.17.c > CMakeFiles\demo_10.17.dir\charpter10\demo_10.17.c.i

CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.s"
	D:\dev\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Administrator\CLionProjects\c_learn\charpter10\demo_10.17.c -o CMakeFiles\demo_10.17.dir\charpter10\demo_10.17.c.s

# Object files for target demo_10.17
demo_10_17_OBJECTS = \
"CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.obj"

# External object files for target demo_10.17
demo_10_17_EXTERNAL_OBJECTS =

demo_10.17.exe: CMakeFiles/demo_10.17.dir/charpter10/demo_10.17.c.obj
demo_10.17.exe: CMakeFiles/demo_10.17.dir/build.make
demo_10.17.exe: CMakeFiles/demo_10.17.dir/linklibs.rsp
demo_10.17.exe: CMakeFiles/demo_10.17.dir/objects1.rsp
demo_10.17.exe: CMakeFiles/demo_10.17.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Administrator\CLionProjects\c_learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable demo_10.17.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\demo_10.17.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/demo_10.17.dir/build: demo_10.17.exe

.PHONY : CMakeFiles/demo_10.17.dir/build

CMakeFiles/demo_10.17.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\demo_10.17.dir\cmake_clean.cmake
.PHONY : CMakeFiles/demo_10.17.dir/clean

CMakeFiles/demo_10.17.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Administrator\CLionProjects\c_learn C:\Users\Administrator\CLionProjects\c_learn C:\Users\Administrator\CLionProjects\c_learn\cmake-build-debug C:\Users\Administrator\CLionProjects\c_learn\cmake-build-debug C:\Users\Administrator\CLionProjects\c_learn\cmake-build-debug\CMakeFiles\demo_10.17.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/demo_10.17.dir/depend

