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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CS260.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CS260.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CS260.dir/flags.make

CMakeFiles/CS260.dir/Assignment04/Queue.cpp.obj: CMakeFiles/CS260.dir/flags.make
CMakeFiles/CS260.dir/Assignment04/Queue.cpp.obj: ../Assignment04/Queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CS260.dir/Assignment04/Queue.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CS260.dir\Assignment04\Queue.cpp.obj -c "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\Assignment04\Queue.cpp"

CMakeFiles/CS260.dir/Assignment04/Queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CS260.dir/Assignment04/Queue.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\Assignment04\Queue.cpp" > CMakeFiles\CS260.dir\Assignment04\Queue.cpp.i

CMakeFiles/CS260.dir/Assignment04/Queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CS260.dir/Assignment04/Queue.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\Assignment04\Queue.cpp" -o CMakeFiles\CS260.dir\Assignment04\Queue.cpp.s

# Object files for target CS260
CS260_OBJECTS = \
"CMakeFiles/CS260.dir/Assignment04/Queue.cpp.obj"

# External object files for target CS260
CS260_EXTERNAL_OBJECTS =

CS260.exe: CMakeFiles/CS260.dir/Assignment04/Queue.cpp.obj
CS260.exe: CMakeFiles/CS260.dir/build.make
CS260.exe: CMakeFiles/CS260.dir/linklibs.rsp
CS260.exe: CMakeFiles/CS260.dir/objects1.rsp
CS260.exe: CMakeFiles/CS260.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CS260.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CS260.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CS260.dir/build: CS260.exe

.PHONY : CMakeFiles/CS260.dir/build

CMakeFiles/CS260.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CS260.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CS260.dir/clean

CMakeFiles/CS260.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260" "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260" "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\cmake-build-debug" "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\cmake-build-debug" "C:\Users\Tempo\OneDrive\Documents\Code Projects\School\CS260\cmake-build-debug\CMakeFiles\CS260.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CS260.dir/depend

