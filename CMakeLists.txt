cmake_minimum_required(VERSION 3.5)

project(WinnipegTransit LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(WinnipegTransit main.cpp
    stops.h stops.cpp
    street.h street.cpp
    cross_street.h cross_street.cpp
    centre.h centre.cpp
    geographic.h geographic.cpp
    keyname.h keyname.cpp
    variant.h variant.cpp
    destination.h destination.cpp
    sitedata.h sitedata.cpp
    parsejson.h parsejson.cpp
    parsestopsjson.h parsestopsjson.cpp
    CommonDataStructs.h
)

include(GNUInstallDirs)
install(TARGETS WinnipegTransit
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
