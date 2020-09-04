cmake_minimum_required(VERSION 3.16)
project(csapp_c C)

set(CMAKE_C_STANDARD 99)

add_executable(csapp_c main.c chapter_02/chapter_02.c chapter_02/chapter_02.h
        chapter_02/bintodec.c chapter_02/bintodec.h chapter_02/show_bytes.c chapter_02/show_bytes.h chapter_03/lib_3-5.c chapter_03/lib_3-5.h chapter_03/3-5-1.c chapter_03/3-5-1.h)