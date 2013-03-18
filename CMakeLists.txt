cmake_minimum_required(VERSION 2.8)

project(lab1)

add_executable(main cBox.cxx main.cxx)

file(GLOB Tests_SRCS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*_cppunit.cxx" )
add_library(${PROJECT_NAME}_cppunit SHARED ${Tests_SRCS})

install(TARGETS main ${PROJECT_NAME}_cppunit RUNTIME DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/install LIBRARY DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/install)