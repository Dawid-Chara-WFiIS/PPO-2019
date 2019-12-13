#----------------------------------------------------------------------------
# Setup the project
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(execs)

#----------------------------------------------------------------------------
# Setup the compile definitions and includes

#----------------------------------------------------------------------------
if(BUILD_LBGRADES)
  add_definitions(${grades_lib_DEFINITIONS})
  include_directories(${grades_lib_INCLUDE_DIRS})
endif()

#----------------------------------------------------------------------------
if(BUILD_LBSTUDENTS)
  add_definitions(${students_lib_DEFINITIONS})
  include_directories(${students_lib_INCLUDE_DIRS})
endif()

#----------------------------------------------------------------------------
# Define executables

if(BUILD_LBDATABASE)
  add_definitions(${database_lib_DEFINITIONS})
  include_directories(${database_lib_INCLUDE_DIRS})
endif()

add_executable(run_grades src/grades.cpp)
target_link_libraries(run_grades grades_lib)

add_executable(run_students src/students.cpp)
target_link_libraries(run_students students_lib)

add_executable(run_database src/database.cpp)
target_link_libraries(run_database database_lib)