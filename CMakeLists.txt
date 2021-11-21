cmake_minimum_required( VERSION 3.10)
project(yaml_test)

add_definitions(-DPROJECT_PATH="${PROJECT_SOURCE_DIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
SET(CMAKE_BUILD_TYPE "release")

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

find_package(yaml-cpp REQUIRED)

add_executable(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/src/yaml-test.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC yaml-cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${YAML_CPP_INCLUDE_DIR})

