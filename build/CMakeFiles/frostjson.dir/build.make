# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vrofze/src/cpp/frost_json

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vrofze/src/cpp/frost_json/build

# Include any dependencies generated for this target.
include CMakeFiles/frostjson.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/frostjson.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/frostjson.dir/flags.make

CMakeFiles/frostjson.dir/frostjson.cpp.o: CMakeFiles/frostjson.dir/flags.make
CMakeFiles/frostjson.dir/frostjson.cpp.o: ../frostjson.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vrofze/src/cpp/frost_json/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/frostjson.dir/frostjson.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/frostjson.dir/frostjson.cpp.o -c /home/vrofze/src/cpp/frost_json/frostjson.cpp

CMakeFiles/frostjson.dir/frostjson.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/frostjson.dir/frostjson.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vrofze/src/cpp/frost_json/frostjson.cpp > CMakeFiles/frostjson.dir/frostjson.cpp.i

CMakeFiles/frostjson.dir/frostjson.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/frostjson.dir/frostjson.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vrofze/src/cpp/frost_json/frostjson.cpp -o CMakeFiles/frostjson.dir/frostjson.cpp.s

CMakeFiles/frostjson.dir/frostjson.cpp.o.requires:

.PHONY : CMakeFiles/frostjson.dir/frostjson.cpp.o.requires

CMakeFiles/frostjson.dir/frostjson.cpp.o.provides: CMakeFiles/frostjson.dir/frostjson.cpp.o.requires
	$(MAKE) -f CMakeFiles/frostjson.dir/build.make CMakeFiles/frostjson.dir/frostjson.cpp.o.provides.build
.PHONY : CMakeFiles/frostjson.dir/frostjson.cpp.o.provides

CMakeFiles/frostjson.dir/frostjson.cpp.o.provides.build: CMakeFiles/frostjson.dir/frostjson.cpp.o


# Object files for target frostjson
frostjson_OBJECTS = \
"CMakeFiles/frostjson.dir/frostjson.cpp.o"

# External object files for target frostjson
frostjson_EXTERNAL_OBJECTS =

libfrostjson.a: CMakeFiles/frostjson.dir/frostjson.cpp.o
libfrostjson.a: CMakeFiles/frostjson.dir/build.make
libfrostjson.a: CMakeFiles/frostjson.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vrofze/src/cpp/frost_json/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libfrostjson.a"
	$(CMAKE_COMMAND) -P CMakeFiles/frostjson.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/frostjson.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/frostjson.dir/build: libfrostjson.a

.PHONY : CMakeFiles/frostjson.dir/build

CMakeFiles/frostjson.dir/requires: CMakeFiles/frostjson.dir/frostjson.cpp.o.requires

.PHONY : CMakeFiles/frostjson.dir/requires

CMakeFiles/frostjson.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/frostjson.dir/cmake_clean.cmake
.PHONY : CMakeFiles/frostjson.dir/clean

CMakeFiles/frostjson.dir/depend:
	cd /home/vrofze/src/cpp/frost_json/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vrofze/src/cpp/frost_json /home/vrofze/src/cpp/frost_json /home/vrofze/src/cpp/frost_json/build /home/vrofze/src/cpp/frost_json/build /home/vrofze/src/cpp/frost_json/build/CMakeFiles/frostjson.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/frostjson.dir/depend

