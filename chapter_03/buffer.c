//
// Created by JoshuaYingWhat on 2020/9/16.
//

#include <stdio.h>
#include "buffer.h"

char *gets(char *s) {

    int c;
    char *dest = s;
    while ((c = getchar()) != '\n' && c != EOF)
        *dest++ = c;
    if (c == EOF && dest == s)
        /* No characters read */
        return NULL;
    *dest++ = '\0'; /* Terminate string */
    return s;
}

void echo() {

    char buf[8];

    gets(buf);

    puts(buf);

}