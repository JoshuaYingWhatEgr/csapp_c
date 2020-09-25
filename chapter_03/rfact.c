//
// Created by JoshuaYingWhat on 2020/9/15.
//

#include "rfact.h"

int rfact(long n) {
    long result;

    if (n < 1) {
        return 1;
    } else {
        result = n * rfact(n - 1);
    }

    return result;
}