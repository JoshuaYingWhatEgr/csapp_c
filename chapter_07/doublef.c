//
// Created by JoshuaYingWhat on 2020/9/26.
//

#include "doublef.h"

/**
 * 如果强符号是精度比较高的数据还是覆盖精度比较低的数据
 * 从而引发难以察觉的错误，如下
 */

double xx;

void doublef() {

    xx = 0.0;
}