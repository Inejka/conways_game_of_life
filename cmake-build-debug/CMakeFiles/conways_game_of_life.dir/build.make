# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/inejka/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6948.80/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/inejka/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/202.6948.80/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/inejka/CLionProjects/conways_game_of_life

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/conways_game_of_life.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/conways_game_of_life.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/conways_game_of_life.dir/flags.make

CMakeFiles/conways_game_of_life.dir/main.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/conways_game_of_life.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/main.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/main.cpp

CMakeFiles/conways_game_of_life.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/main.cpp > CMakeFiles/conways_game_of_life.dir/main.cpp.i

CMakeFiles/conways_game_of_life.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/main.cpp -o CMakeFiles/conways_game_of_life.dir/main.cpp.s

CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.o: ../include/main_window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/include/main_window.cpp

CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/include/main_window.cpp > CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.i

CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/include/main_window.cpp -o CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.s

CMakeFiles/conways_game_of_life.dir/include/windows.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/include/windows.cpp.o: ../include/windows.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/conways_game_of_life.dir/include/windows.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/include/windows.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/include/windows.cpp

CMakeFiles/conways_game_of_life.dir/include/windows.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/include/windows.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/include/windows.cpp > CMakeFiles/conways_game_of_life.dir/include/windows.cpp.i

CMakeFiles/conways_game_of_life.dir/include/windows.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/include/windows.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/include/windows.cpp -o CMakeFiles/conways_game_of_life.dir/include/windows.cpp.s

CMakeFiles/conways_game_of_life.dir/include/button.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/include/button.cpp.o: ../include/button.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/conways_game_of_life.dir/include/button.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/include/button.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/include/button.cpp

CMakeFiles/conways_game_of_life.dir/include/button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/include/button.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/include/button.cpp > CMakeFiles/conways_game_of_life.dir/include/button.cpp.i

CMakeFiles/conways_game_of_life.dir/include/button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/include/button.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/include/button.cpp -o CMakeFiles/conways_game_of_life.dir/include/button.cpp.s

CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.o: ../include/do_button.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/include/do_button.cpp

CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/include/do_button.cpp > CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.i

CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/include/do_button.cpp -o CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.s

CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.o: ../include/game_of_life.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/include/game_of_life.cpp

CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/include/game_of_life.cpp > CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.i

CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/include/game_of_life.cpp -o CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.s

CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.o: CMakeFiles/conways_game_of_life.dir/flags.make
CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.o: ../include/entry_field.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.o -c /home/inejka/CLionProjects/conways_game_of_life/include/entry_field.cpp

CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/inejka/CLionProjects/conways_game_of_life/include/entry_field.cpp > CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.i

CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/inejka/CLionProjects/conways_game_of_life/include/entry_field.cpp -o CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.s

# Object files for target conways_game_of_life
conways_game_of_life_OBJECTS = \
"CMakeFiles/conways_game_of_life.dir/main.cpp.o" \
"CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.o" \
"CMakeFiles/conways_game_of_life.dir/include/windows.cpp.o" \
"CMakeFiles/conways_game_of_life.dir/include/button.cpp.o" \
"CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.o" \
"CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.o" \
"CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.o"

# External object files for target conways_game_of_life
conways_game_of_life_EXTERNAL_OBJECTS =

conways_game_of_life: CMakeFiles/conways_game_of_life.dir/main.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/include/main_window.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/include/windows.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/include/button.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/include/do_button.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/include/game_of_life.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/include/entry_field.cpp.o
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/build.make
conways_game_of_life: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so.2.5.1
conways_game_of_life: /usr/lib/x86_64-linux-gnu/libsfml-audio.so.2.5.1
conways_game_of_life: /usr/lib/x86_64-linux-gnu/libsfml-window.so.2.5.1
conways_game_of_life: /usr/lib/x86_64-linux-gnu/libsfml-system.so.2.5.1
conways_game_of_life: CMakeFiles/conways_game_of_life.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable conways_game_of_life"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/conways_game_of_life.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/conways_game_of_life.dir/build: conways_game_of_life

.PHONY : CMakeFiles/conways_game_of_life.dir/build

CMakeFiles/conways_game_of_life.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/conways_game_of_life.dir/cmake_clean.cmake
.PHONY : CMakeFiles/conways_game_of_life.dir/clean

CMakeFiles/conways_game_of_life.dir/depend:
	cd /home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/inejka/CLionProjects/conways_game_of_life /home/inejka/CLionProjects/conways_game_of_life /home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug /home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug /home/inejka/CLionProjects/conways_game_of_life/cmake-build-debug/CMakeFiles/conways_game_of_life.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/conways_game_of_life.dir/depend

