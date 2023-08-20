cmake_minimum_required(VERSION 3.10)
project(MyCppProject)

set(CMAKE_CXX_STANDARD 11)

# Find libcurl package
find_package(CURL REQUIRED)

include_directories(include ${CURL_INCLUDE_DIRS})  # Include libcurl headers
include_directories(include/nlohmann) 

add_executable(MyCppProject src/main.cpp)

# Link libcurl library
target_link_libraries(MyCppProject ${CURL_LIBRARIES})
