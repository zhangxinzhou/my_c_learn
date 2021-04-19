//
// Created by Administrator on 2021/2/22.
//

#include <stdio.h>

int main() {

    int x, y;
    printf("please enter two numbers:\n");
    scanf("x=%d,y=%d", &x, &y);
    x = y - x;
    y = y - x;
    x = y + x;
    printf("x=%d,y=%d\n", x, y);
    return 0;
}