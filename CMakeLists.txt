cmake_minimum_required(VERSION 3.16)
project(csapp_c C)

set(CMAKE_C_STANDARD 99)

add_executable(csapp_c main.c chapter_02/chapter_02.c chapter_02/chapter_02.h
        chapter_02/bintodec.c chapter_02/bintodec.h chapter_02/show_bytes.c chapter_02/show_bytes.h chapter_03/lib_3-5.c chapter_03/lib_3-5.h chapter_03/3-5-1.c chapter_03/3-5-1.h chapter_03/3-6.c chapter_03/3-6.h chapter_03/3-7.c chapter_03/3-7.h chapter_03/3-8.c chapter_03/3-8.h chapter_03/sum.c chapter_03/sums.h chapter_03/change.c chapter_03/change.h chapter_03/rfact.c chapter_03/rfact.h chapter_03/buffer.c chapter_03/buffer.h chapter_03/fun.c chapter_03/fun.h sums.c chapter_07/f.c chapter_07/f.h chapter_07/doublef.c chapter_07/doublef.h)