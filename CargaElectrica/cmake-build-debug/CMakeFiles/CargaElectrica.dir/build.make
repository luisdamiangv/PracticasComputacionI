# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\damia\CLionProjects\CargaElectrica

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CargaElectrica.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/CargaElectrica.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CargaElectrica.dir/flags.make

CMakeFiles/CargaElectrica.dir/main.cpp.obj: CMakeFiles/CargaElectrica.dir/flags.make
CMakeFiles/CargaElectrica.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CargaElectrica.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CargaElectrica.dir\main.cpp.obj -c C:\Users\damia\CLionProjects\CargaElectrica\main.cpp

CMakeFiles/CargaElectrica.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CargaElectrica.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\damia\CLionProjects\CargaElectrica\main.cpp > CMakeFiles\CargaElectrica.dir\main.cpp.i

CMakeFiles/CargaElectrica.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CargaElectrica.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\damia\CLionProjects\CargaElectrica\main.cpp -o CMakeFiles\CargaElectrica.dir\main.cpp.s

CMakeFiles/CargaElectrica.dir/Grupo.cpp.obj: CMakeFiles/CargaElectrica.dir/flags.make
CMakeFiles/CargaElectrica.dir/Grupo.cpp.obj: ../Grupo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CargaElectrica.dir/Grupo.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\CargaElectrica.dir\Grupo.cpp.obj -c C:\Users\damia\CLionProjects\CargaElectrica\Grupo.cpp

CMakeFiles/CargaElectrica.dir/Grupo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CargaElectrica.dir/Grupo.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\damia\CLionProjects\CargaElectrica\Grupo.cpp > CMakeFiles\CargaElectrica.dir\Grupo.cpp.i

CMakeFiles/CargaElectrica.dir/Grupo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CargaElectrica.dir/Grupo.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\damia\CLionProjects\CargaElectrica\Grupo.cpp -o CMakeFiles\CargaElectrica.dir\Grupo.cpp.s

# Object files for target CargaElectrica
CargaElectrica_OBJECTS = \
"CMakeFiles/CargaElectrica.dir/main.cpp.obj" \
"CMakeFiles/CargaElectrica.dir/Grupo.cpp.obj"

# External object files for target CargaElectrica
CargaElectrica_EXTERNAL_OBJECTS =

CargaElectrica.exe: CMakeFiles/CargaElectrica.dir/main.cpp.obj
CargaElectrica.exe: CMakeFiles/CargaElectrica.dir/Grupo.cpp.obj
CargaElectrica.exe: CMakeFiles/CargaElectrica.dir/build.make
CargaElectrica.exe: CMakeFiles/CargaElectrica.dir/linklibs.rsp
CargaElectrica.exe: CMakeFiles/CargaElectrica.dir/objects1.rsp
CargaElectrica.exe: CMakeFiles/CargaElectrica.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CargaElectrica.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CargaElectrica.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CargaElectrica.dir/build: CargaElectrica.exe
.PHONY : CMakeFiles/CargaElectrica.dir/build

CMakeFiles/CargaElectrica.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CargaElectrica.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CargaElectrica.dir/clean

CMakeFiles/CargaElectrica.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\damia\CLionProjects\CargaElectrica C:\Users\damia\CLionProjects\CargaElectrica C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug C:\Users\damia\CLionProjects\CargaElectrica\cmake-build-debug\CMakeFiles\CargaElectrica.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CargaElectrica.dir/depend

