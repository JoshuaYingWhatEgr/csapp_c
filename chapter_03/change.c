//
// Created by JoshuaYingWhat on 2020/9/15.
//

#include "change.h"

#include <stdio.h>

int chage(int x, int y) {

    int temp = x;

    x = y;

    y = temp;

    printf("入口参数变了 x= %d\t,y= %d\n", x, y);
}