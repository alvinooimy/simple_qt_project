cmake_minimum_required(VERSION 3.5)

project(test)

# Turn on automatic invocation of the MOC, UIC & RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 CONFIG REQUIRED COMPONENTS Widgets)

add_executable(main
    hello-qt.cpp 
	qt-layout.cpp
	mainwindow.h
	showimg.cpp
	showimg.h
	profile.cpp
	profile.h
	login.cpp
	login.h
)

target_link_libraries(main
    Qt5::Widgets
)

