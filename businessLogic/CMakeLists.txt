cmake_minimum_required(VERSION 3.16)

project(businessLogic LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_library(businessLogic SHARED
  businessLogic_global.h
  systemrezerwacji.cpp
  systemrezerwacji.h
  sala.h sala.cpp
  salawykladowa.h salawykladowa.cpp
  rezerwacja.h rezerwacja.cpp
  salalaboratoryjna.h salalaboratoryjna.cpp
  salakomputerowa.h salakomputerowa.cpp
)

target_link_libraries(businessLogic PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_compile_definitions(businessLogic PRIVATE BUSINESSLOGIC_LIBRARY)
