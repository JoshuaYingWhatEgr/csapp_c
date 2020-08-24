//
// Created by joshuayingwhat on 2020/8/24.
//

#ifndef CSAPP_C_SHOW_BYTES_H
#define CSAPP_C_SHOW_BYTES_H

#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start,size_t len);

void show_int(int x);


void show_float(float  x);

void show_pointer(void *x);

void show_string(char *x);

#endif //CSAPP_C_SHOW_BYTES_H
