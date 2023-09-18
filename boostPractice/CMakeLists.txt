cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS         OFF) # ignore debug libs and 
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs 
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)



project(boost_project_one VERSION 1.0)

find_package(Boost 1.83.0)
if(Boost_FOUND)
  find_package(Boost COMPONENTS ALL)
  include_directories(include ${Boost_INCLUDE_DIRS} )
  add_executable(chrono_test apps/crono_boost.cpp)
  add_executable(string_test_one apps/string_test_one.cpp)
  target_link_libraries(chrono_test ${Boost_LIBRARIES})
  target_link_libraries(string_test_one ${Boost_LIBRARIES})
endif()

