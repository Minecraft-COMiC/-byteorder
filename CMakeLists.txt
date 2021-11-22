cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDARD 99)

add_library(
        __COMiC_byteorder
        STATIC

        src/convert.c
)

target_link_libraries(__COMiC_byteorder PUBLIC COMiC::types)
target_include_directories(__COMiC_byteorder PUBLIC include)
set_target_properties(__COMiC_byteorder PROPERTIES LINKER_LANGUAGE C)

install(
        TARGETS __COMiC_byteorder
        ARCHIVE DESTINATION ./lib
        PUBLIC_HEADER DESTINATION ./include
)

add_library(COMiC::byteorder ALIAS __COMiC_byteorder)