cmake_minimum_required(VERSION 3.16)

project(VeriProjesi LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(VeriProjesi
  main.cpp
  veri/Tablo.h
  veri/verisiniflari/insan.h veri/verisiniflari/insan.cpp
  veri/verisiniflari/lise.h veri/verisiniflari/lise.cpp
  veri/verisiniflari/sube.h veri/verisiniflari/sube.cpp
  veri/verisiniflari/idlisinif.h veri/verisiniflari/idlisinif.cpp
  araclar/hatalar.h
  veri/tablo_tanimlari.h
  veri/veritabani.h veri/veritabani.cpp


)
target_link_libraries(VeriProjesi Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS VeriProjesi
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
