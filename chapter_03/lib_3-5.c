//
// Created by JoshuaYingWhat on 2020/9/4.
//

#include "lib_3-5.h"

//通过得到的汇编代码 写出decode1的代码逻辑
//decode1:
//movq (%rdi), %r8
//movq (%rsi), %rcx
//movq (%rdx), %rax
//movq   %r8,  (%rsi)
//movq %rcx,   (%rdx)
//movq %rax,  (%rdi)
//ret
//xp,yp,zp 分别存储于%rdi,%rsi,%rdx
void decode1(long *xp, long *yp, long *zp) {

    long r8 = *xp;// r8 存储于%r8中

    long rcx = *yp;// rcx存储于%rcx中

    long rax = *zp;//rax存储于%rax中

    *yp = r8;

    *zp = rcx;

    *xp = rax;

    return;
}