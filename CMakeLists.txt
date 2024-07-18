cmake_minimum_required(VERSION 3.5)

project(TP-POO-2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TP-POO-2 main.cpp
    Menu.cpp Menu.h Notas.txt Persona.cpp Persona.h)

include(GNUInstallDirs)
install(TARGETS TP-POO-2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
