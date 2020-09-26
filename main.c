#include <stdio.h>

#include "chapter_02/chapter_02.h"

#include "chapter_02/show_bytes.h"

#include "chapter_03/3-5-1.h"

#include "chapter_03/3-8.h"

#include "chapter_03/sums.h"

#include "chapter_03/change.h"

#include "chapter_03/rfact.h"
#include "chapter_03/buffer.h"
#include "chapter_03/fun.h"

#include "chapter_07/f.h"

#include "chapter_07/doublef.h"

int sums(int *a, int n);

int xx = 456;

int yy = 789;

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

    //逻辑移位运算
    char j = 1 << 2;

    printf("%u\n", j);

    char k = -128;

    char kk = k - 1;

    //11000 0000 -128的原码
    //10111 1111 -128的反码
    //11000 0000 -128的补码


    //1000 0001 -1的原码
    //1111 1110 -1的反码
    //1111 1111 -1的补码

    //11000 0000
    //+
    //1111  1111

    //100111 1111 截断
    //  0111 1111 最终的结果 (因为最后的补码结果是一个无符号整数,所以也就=反码=原码)
    //127         转换为10进制
    printf("%d\n", kk); //127

    int b = 1 - 2;

    printf("%d\n", b);//-1

    //1000 0001     -1
    //1000 0001     -1

    //1111 1110    反码
    //1111 1110

    //1111 1111    补码
    //1111 1111

    //1111 1110

    //1111 1101  反码

    //1000 0010  原码
    //-2         转换为10进制
    printf("%d\n", (char) ((-1 - 1)));


    printf("%d\n", (char) (1 + 1));

    //1000 0101   -5
    //1000 0001   -1

    //1111 1010  -5 反码
    //1111 1110  -1 反码

    //1111 1011  -5 补码
    //+
    //1111 1111  -1 补码


    //1111 1010  补码
    //1111 1001  反码

    //1000 0110  原码
    //转换成10进制  -6

    printf("%d\n", (char) (-5 - 1));

//    printf("%d\n", scale(1, 2, 3));

    addq(1, 2);


//    sum(0, 0);

    int x = 50, y = 100;

    printf("------------------\n");

    printf("x= %d\t,y= %d\n", x, y);

    chage(x, y);

    printf("但是main函数中的成员变量还没有变x= %d\t,y= %d\n", x, y);

    int temp = x;

    x = y;

    y = temp;

    printf("x= %d\t,y= %d\n", x, y);

    long l = rfact(3);

//    printf("%d\n", l);

//    echo();

    fun(20);

    int array[2] = {1, 2};

    int vals = sums(array, 2);

//    printf("%d\n", vals);

    f();

    printf("xx = 0x%x yy = 0x%x\n", xx, yy);

    doublef();

    printf("xx = 0x%x yy = 0x%x\n", x, yy);

    return 0;
}
