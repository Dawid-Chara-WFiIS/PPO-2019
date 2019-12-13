cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(database_lib)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_DEFAULT 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set (database_lib_includes ${PROJECT_SOURCE_DIR}/include)

include_directories(${grades_lib_INCLUDE_DIRS})
include_directories(${students_lib_INCLUDE_DIRS})
include_directories(${database_lib_includes})
file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} STATIC ${SOURCES})

target_link_libraries(${PROJECT_NAME} students_lib grades_lib)


set(${PROJECT_NAME}_INCLUDE_DIRS ${database_lib_includes}
                                 CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)
