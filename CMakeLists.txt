cmake_minimum_required( VERSION 3.2)
project(yaml_test)

add_definitions(-DPROJECT_PATH="${PROJECT_SOURCE_DIR}")

SET(CMAKE_CXX_COMPILE "g++")
SET(CMAKE_C_COMPILE "gcc")
SET( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11" )
SET( CMAKE_BUILD_TYPE "release")
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(yaml-cpp REQUIRED)

include_directories(${YAML_CPP_INCLUDE_DIR})
add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/yaml-test.cpp)
target_link_libraries(${PROJECT_NAME} yaml-cpp)
# target_link_libraries(${PROJECT_NAME} ${YAML_CPP_LIBRARIES})

