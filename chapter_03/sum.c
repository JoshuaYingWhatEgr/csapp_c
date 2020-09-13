//
// Created by JoshuaYingWhat on 2020/9/11.
//

#include "sum.h"

#include <stdio.h>

int sum(int a, unsigned len) {

    int i, sum = 0;

    for (int i = 0; i <= len - 1; i++) { //当len = 0时 出现存储器访问异常

        sum += a;
    }

    printf("%d\n", sum);
    return sum;
}