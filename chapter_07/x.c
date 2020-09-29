//
// Created by JoshuaYingWhat on 2020/9/29.
//

#include <stdio.h>

#include "x.h"

/**
 * 当有多个重定位文件中定义了多个相同名称的全局变量时，连接器会出错
 *
 * x在x.c中被定义了，然后又在main.c中被定义了
 */
int x = 20;

void define_X() {

    printf("x = %d\n", x);
}