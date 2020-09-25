//
// Created by JoshuaYingWhat on 2020/9/16.
//

#include "fun.h"
double fun(int i) {
    volatile double d[1] = {3.14};

    volatile long int a[2];

    a[i] = 1073741824;

    return d[0];
}