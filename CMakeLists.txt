
project(qtBoincMan)

cmake_minimum_required(VERSION 2.8)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(qtBoincMan_SRCS src/ProjectsTab.cpp src/NoticeTab.cpp src/qtBoincMan.cpp src/main.cpp)

qt4_automoc(${qtBoincMan_SRCS})

add_executable(qtBoincMan ${qtBoincMan_SRCS})

target_link_libraries(qtBoincMan ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
