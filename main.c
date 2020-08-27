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

    printf("\n");

    char a = -1;

    printf("%d\n", a);

    short int val = -12345;

    unsigned short uval = (unsigned short) val;

    printf("v = %d,uval = %u\n", val, uval);

    //将-3转换成无符号数
    char i = -3;

    //1000 0011 原码
    //1111 1100 反码
    //1111 1101 补码 = 1*2 7 +1*2 6 + 1*2 5 + 1*2 4 + 1 * 2 3 + 1 * 2 2 +1 = 128+64 +32 +16 +8+4 +1 = 253

    printf("%u\n", (unsigned char) i);//输出10进制无符号整数

    if (1 > (unsigned char) i) {
        printf("1 > i\n");
    } else {
        printf("1 < %u\n", (unsigned char) i);
    }

    return 0;
}
