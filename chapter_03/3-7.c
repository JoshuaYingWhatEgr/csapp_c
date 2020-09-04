//
// Created by JoshuaYingWhat on 2020/9/4.
//

#include "3-7.h"

//根据得到的汇编代码 推导出{}中的表达式
//leaq (%rdi,%rdi,4),%rax   %rax = 5*%rdi
//leaq (%rax,%rsi,2),%rax   %rax = 5*%rdi+2*%rsi
//leaq (%rax,%rdx,8),%rax   %rax = 5*%rdi+2*%rsi+%rdx*8

long scale2(long x, long y, long z) {
    //%rdi = x
    //%rsi = y
    //%rdx = z

    return 5 * x + 2 * y + 8 * z;
}