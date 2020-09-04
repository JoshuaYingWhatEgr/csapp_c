//
// Created by joshuayingwhat on 2020/9/4.
//

#include <stdio.h>

#include "3-8.h"

void addq(long x, long y) {

    //addq %rcx,(%rax) 0x1,0x100   0001 + 0001 0000 0000 = 1 + 256 = 257
    long rax = 0x1 + 0x100; // 0001   0001 0000 0000  1+1*2的8次方= 257 %rax的值为0x100     %rax的值 != 0x101
    printf("%d\n", rax);
    printf("10进制数据:%d,转换为16进制:0x%x\n", rax, rax);

    //subq %rdx,8(%rax) 0x3 , 8+0x100  3, 8+0001 0000 0000   subq 256+8-3 = 261  值为 0xA8
    printf("10进制数据:%d,转换为16进制:0x%x\n", 0xA8, 168);
}