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
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diogo/CLionProjects/CppEnhance/simple_operations

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/simple_operations.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/simple_operations.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/simple_operations.dir/flags.make

CMakeFiles/simple_operations.dir/main.cpp.o: CMakeFiles/simple_operations.dir/flags.make
CMakeFiles/simple_operations.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/simple_operations.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_operations.dir/main.cpp.o -c /home/diogo/CLionProjects/CppEnhance/simple_operations/main.cpp

CMakeFiles/simple_operations.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_operations.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diogo/CLionProjects/CppEnhance/simple_operations/main.cpp > CMakeFiles/simple_operations.dir/main.cpp.i

CMakeFiles/simple_operations.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_operations.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diogo/CLionProjects/CppEnhance/simple_operations/main.cpp -o CMakeFiles/simple_operations.dir/main.cpp.s

CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.o: CMakeFiles/simple_operations.dir/flags.make
CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.o: ../credit_card_verifier/CreditCardInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.o -c /home/diogo/CLionProjects/CppEnhance/simple_operations/credit_card_verifier/CreditCardInfo.cpp

CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diogo/CLionProjects/CppEnhance/simple_operations/credit_card_verifier/CreditCardInfo.cpp > CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.i

CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diogo/CLionProjects/CppEnhance/simple_operations/credit_card_verifier/CreditCardInfo.cpp -o CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.s

CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.o: CMakeFiles/simple_operations.dir/flags.make
CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.o: ../dynamic_arrays/dynamicArrays.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.o -c /home/diogo/CLionProjects/CppEnhance/simple_operations/dynamic_arrays/dynamicArrays.cpp

CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diogo/CLionProjects/CppEnhance/simple_operations/dynamic_arrays/dynamicArrays.cpp > CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.i

CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diogo/CLionProjects/CppEnhance/simple_operations/dynamic_arrays/dynamicArrays.cpp -o CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.s

# Object files for target simple_operations
simple_operations_OBJECTS = \
"CMakeFiles/simple_operations.dir/main.cpp.o" \
"CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.o" \
"CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.o"

# External object files for target simple_operations
simple_operations_EXTERNAL_OBJECTS =

simple_operations: CMakeFiles/simple_operations.dir/main.cpp.o
simple_operations: CMakeFiles/simple_operations.dir/credit_card_verifier/CreditCardInfo.cpp.o
simple_operations: CMakeFiles/simple_operations.dir/dynamic_arrays/dynamicArrays.cpp.o
simple_operations: CMakeFiles/simple_operations.dir/build.make
simple_operations: CMakeFiles/simple_operations.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable simple_operations"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/simple_operations.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/simple_operations.dir/build: simple_operations
.PHONY : CMakeFiles/simple_operations.dir/build

CMakeFiles/simple_operations.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/simple_operations.dir/cmake_clean.cmake
.PHONY : CMakeFiles/simple_operations.dir/clean

CMakeFiles/simple_operations.dir/depend:
	cd /home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diogo/CLionProjects/CppEnhance/simple_operations /home/diogo/CLionProjects/CppEnhance/simple_operations /home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug /home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug /home/diogo/CLionProjects/CppEnhance/simple_operations/cmake-build-debug/CMakeFiles/simple_operations.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/simple_operations.dir/depend

