# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Labs\OOP_labs\lab_01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Labs\OOP_labs\lab_01\build

# Include any dependencies generated for this target.
include CMakeFiles/test01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test01.dir/flags.make

CMakeFiles/test01.dir/test.cpp.obj: CMakeFiles/test01.dir/flags.make
CMakeFiles/test01.dir/test.cpp.obj: CMakeFiles/test01.dir/includes_CXX.rsp
CMakeFiles/test01.dir/test.cpp.obj: D:/Labs/OOP_labs/lab_01/test.cpp
CMakeFiles/test01.dir/test.cpp.obj: CMakeFiles/test01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Labs\OOP_labs\lab_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test01.dir/test.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test01.dir/test.cpp.obj -MF CMakeFiles\test01.dir\test.cpp.obj.d -o CMakeFiles\test01.dir\test.cpp.obj -c D:\Labs\OOP_labs\lab_01\test.cpp

CMakeFiles/test01.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test01.dir/test.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Labs\OOP_labs\lab_01\test.cpp > CMakeFiles\test01.dir\test.cpp.i

CMakeFiles/test01.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test01.dir/test.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Labs\OOP_labs\lab_01\test.cpp -o CMakeFiles\test01.dir\test.cpp.s

CMakeFiles/test01.dir/lab_func.cpp.obj: CMakeFiles/test01.dir/flags.make
CMakeFiles/test01.dir/lab_func.cpp.obj: CMakeFiles/test01.dir/includes_CXX.rsp
CMakeFiles/test01.dir/lab_func.cpp.obj: D:/Labs/OOP_labs/lab_01/lab_func.cpp
CMakeFiles/test01.dir/lab_func.cpp.obj: CMakeFiles/test01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Labs\OOP_labs\lab_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test01.dir/lab_func.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test01.dir/lab_func.cpp.obj -MF CMakeFiles\test01.dir\lab_func.cpp.obj.d -o CMakeFiles\test01.dir\lab_func.cpp.obj -c D:\Labs\OOP_labs\lab_01\lab_func.cpp

CMakeFiles/test01.dir/lab_func.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test01.dir/lab_func.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Labs\OOP_labs\lab_01\lab_func.cpp > CMakeFiles\test01.dir\lab_func.cpp.i

CMakeFiles/test01.dir/lab_func.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test01.dir/lab_func.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Labs\OOP_labs\lab_01\lab_func.cpp -o CMakeFiles\test01.dir\lab_func.cpp.s

# Object files for target test01
test01_OBJECTS = \
"CMakeFiles/test01.dir/test.cpp.obj" \
"CMakeFiles/test01.dir/lab_func.cpp.obj"

# External object files for target test01
test01_EXTERNAL_OBJECTS =

test01.exe: CMakeFiles/test01.dir/test.cpp.obj
test01.exe: CMakeFiles/test01.dir/lab_func.cpp.obj
test01.exe: CMakeFiles/test01.dir/build.make
test01.exe: lib/libgtest_main.a
test01.exe: lib/libgmock_main.a
test01.exe: lib/libgmock.a
test01.exe: lib/libgtest.a
test01.exe: CMakeFiles/test01.dir/linkLibs.rsp
test01.exe: CMakeFiles/test01.dir/objects1.rsp
test01.exe: CMakeFiles/test01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Labs\OOP_labs\lab_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test01.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test01.dir/build: test01.exe
.PHONY : CMakeFiles/test01.dir/build

CMakeFiles/test01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test01.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test01.dir/clean

CMakeFiles/test01.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Labs\OOP_labs\lab_01 D:\Labs\OOP_labs\lab_01 D:\Labs\OOP_labs\lab_01\build D:\Labs\OOP_labs\lab_01\build D:\Labs\OOP_labs\lab_01\build\CMakeFiles\test01.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test01.dir/depend

