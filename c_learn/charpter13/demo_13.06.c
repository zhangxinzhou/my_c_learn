//
// Created by Administrator on 2021/4/1.
//

#include <stdio.h>

void main() {

    int x = 30, y = -30;
    x = x >> 3;
    y = y >> 3;
    printf("the result1 is : %d,%d\n", x, y);
    x = x >> 2;
    y = y >> 2;
    printf("the result2 is : %d,%d\n", x, y);
}
