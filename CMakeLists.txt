cmake_minimum_required(VERSION 3.17)
project(qtcalc)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5Widgets REQUIRED)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

add_executable(qtcalc main.cpp button.cpp calculator.cpp)
target_link_libraries(qtcalc Qt5::Widgets)
