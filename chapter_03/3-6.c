//
// Created by JoshuaYingWhat on 2020/9/4.
//

#include "3-6.h"

//%rax = x, %rcx = y;
long leaq(long x, long y) {

    //leaq 6(%rax),%rdx
    long rdx = x + 6;

    //leaq (%rax,%rcx),%rdx
    rdx = x + y;

    //leaq (%rax,%rcx,4),%rdx
    rdx = x + 4 * y;

    //leaq 7(%rax,%rax,8),%rdx
    rdx = x + 8 * x + 7;

    //leaq 0xA(,%rcx,4),%rdx
    rdx = 10 + 4 * y;

    //leaq 9(%rax,%rcx,2),%rdx
    rdx = x + y * 2 + 9;
    return rdx;
}
