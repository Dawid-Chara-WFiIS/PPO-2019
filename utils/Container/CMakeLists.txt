cmake_minimum_required(VERSION 3.1)
project (container)

#----------------------------------------------------------------------------
set (container_lib_include ${PROJECT_SOURCE_DIR}/include)
include_directories(${container_lib_include})

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

#----------------------------------------------------------------------------
# Build library

add_library(${PROJECT_NAME} STATIC ${SOURCES})

# target_link_libraries(${PROJECT_NAME} ...)
# --> not needded, we do not have any external dependacies for this module

#----------------------------------------------------------------------------
# Expose project's public includes to other subprojects through cache variable
set(${PROJECT_NAME}_INCLUDE_DIRS ${container_lib_include}
                                 CACHE INTERNAL "${PROJECT_NAME}: Include Directories" FORCE)

add_executable(Main Main.cpp ${SOURCES})
