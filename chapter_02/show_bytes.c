//
// Created by joshuayingwhat on 2020/8/24.
//

#include "show_bytes.h"

#include <stdio.h>
#include <string.h>

//对象的机器级表示
void show_bytes(byte_pointer start, size_t len) {
    size_t i;

    for (int i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {

    show_bytes((byte_pointer) &x, sizeof(void *));
}

void show_string(char *x) {
    show_bytes(x, strlen(x));
}
