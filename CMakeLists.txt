
project(qtSeti)

cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(qtSeti_SRCS src/qtSeti.cpp src/main.cpp)

qt4_automoc(${qtSeti_SRCS})

add_executable(qtSeti ${qtSeti_SRCS})

target_link_libraries(qtSeti ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY})
