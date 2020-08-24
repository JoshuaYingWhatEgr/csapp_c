#include <stdio.h>

#include "chapter_02/chapter_02.h"

#include "chapter_02/show_bytes.h"

int main() {

    chapter_02();

    show_int(200);

    printf("\n");

    //对象的机器级表示
    show_int(400);

    printf("\n");

    //字符串的机器级表示
    show_string("abcdef");

    return 0;
}
