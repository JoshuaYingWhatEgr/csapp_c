//
// Created by joshuayingwhat on 2020/9/4.
//

#include <stdio.h>

#include "3-8.h"

void addq(long x, long y) {

    //addq %rcx,(%rax) 0x1,0xFF   0001 + 1111 1111 = 1 + 255 = 256
    long rax = 0x1 + 0xFF; //     0001   1111 1111 = 1+  1*2的7次方
    printf("%d\n", rax);
    printf("10进制数据:%d,转换为16进制:0x%x\n", rax, rax);

    //subq %rdx,8(%rax) 0x3 , 0xFF +8 = 255+8-3 = 260
    printf("10进制数据:%d,转换为16进制:0x%x\n", 0xa8, 168);
}