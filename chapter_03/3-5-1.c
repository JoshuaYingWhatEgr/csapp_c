//
// Created by JoshuaYingWhat on 2020/9/4.
//

#include "3-5-1.h"

long scale(long x, long y, long z) {

    //操作指令为leap,将有效地址写如目的操作数: %rdi = x; %rsi = y; %rdx = z;
    //leaq (%rdi,%rsi,4), %rax;   %rax = x +4 *y;
    //leaq (%rdx,%rdx,2), %rcx;   %rcx = z +2 *z;
    //leaq (%rax,%rcx,4), %rax;   %rax = (x+4*y) + 4*(z+2*z);

    long t = x + 4 * y + 12 * z;

    return t;
}