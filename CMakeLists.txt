cmake_minimum_required(VERSION 3.5)

project(hello LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_MACOSX_BUNDLE ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(hello
  main.cpp
  mainwindow.cpp
  mainwindow.h
  mainwindow.ui
)

target_link_libraries(hello PRIVATE Qt5::Widgets)
