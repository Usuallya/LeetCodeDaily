# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\git\C++\PSINS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\git\C++\PSINS\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PSINS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PSINS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PSINS.dir/flags.make

CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.obj: CMakeFiles/PSINS.dir/flags.make
CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.obj: ../Main_SINSGPS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\C++\PSINS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PSINS.dir\Main_SINSGPS.cpp.obj -c C:\git\C++\PSINS\Main_SINSGPS.cpp

CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\C++\PSINS\Main_SINSGPS.cpp > CMakeFiles\PSINS.dir\Main_SINSGPS.cpp.i

CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\C++\PSINS\Main_SINSGPS.cpp -o CMakeFiles\PSINS.dir\Main_SINSGPS.cpp.s

CMakeFiles/PSINS.dir/KFApp.cpp.obj: CMakeFiles/PSINS.dir/flags.make
CMakeFiles/PSINS.dir/KFApp.cpp.obj: ../KFApp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\C++\PSINS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PSINS.dir/KFApp.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PSINS.dir\KFApp.cpp.obj -c C:\git\C++\PSINS\KFApp.cpp

CMakeFiles/PSINS.dir/KFApp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PSINS.dir/KFApp.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\C++\PSINS\KFApp.cpp > CMakeFiles\PSINS.dir\KFApp.cpp.i

CMakeFiles/PSINS.dir/KFApp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PSINS.dir/KFApp.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\C++\PSINS\KFApp.cpp -o CMakeFiles\PSINS.dir\KFApp.cpp.s

CMakeFiles/PSINS.dir/PSINS.cpp.obj: CMakeFiles/PSINS.dir/flags.make
CMakeFiles/PSINS.dir/PSINS.cpp.obj: ../PSINS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\git\C++\PSINS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PSINS.dir/PSINS.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PSINS.dir\PSINS.cpp.obj -c C:\git\C++\PSINS\PSINS.cpp

CMakeFiles/PSINS.dir/PSINS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PSINS.dir/PSINS.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\git\C++\PSINS\PSINS.cpp > CMakeFiles\PSINS.dir\PSINS.cpp.i

CMakeFiles/PSINS.dir/PSINS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PSINS.dir/PSINS.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\git\C++\PSINS\PSINS.cpp -o CMakeFiles\PSINS.dir\PSINS.cpp.s

# Object files for target PSINS
PSINS_OBJECTS = \
"CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.obj" \
"CMakeFiles/PSINS.dir/KFApp.cpp.obj" \
"CMakeFiles/PSINS.dir/PSINS.cpp.obj"

# External object files for target PSINS
PSINS_EXTERNAL_OBJECTS =

PSINS.exe: CMakeFiles/PSINS.dir/Main_SINSGPS.cpp.obj
PSINS.exe: CMakeFiles/PSINS.dir/KFApp.cpp.obj
PSINS.exe: CMakeFiles/PSINS.dir/PSINS.cpp.obj
PSINS.exe: CMakeFiles/PSINS.dir/build.make
PSINS.exe: CMakeFiles/PSINS.dir/linklibs.rsp
PSINS.exe: CMakeFiles/PSINS.dir/objects1.rsp
PSINS.exe: CMakeFiles/PSINS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\git\C++\PSINS\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable PSINS.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PSINS.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PSINS.dir/build: PSINS.exe

.PHONY : CMakeFiles/PSINS.dir/build

CMakeFiles/PSINS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PSINS.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PSINS.dir/clean

CMakeFiles/PSINS.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\git\C++\PSINS C:\git\C++\PSINS C:\git\C++\PSINS\cmake-build-debug C:\git\C++\PSINS\cmake-build-debug C:\git\C++\PSINS\cmake-build-debug\CMakeFiles\PSINS.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PSINS.dir/depend

