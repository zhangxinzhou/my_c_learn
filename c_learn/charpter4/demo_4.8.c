//
// Created by Administrator on 2021/2/21.
//


#include <stdio.h>

int main() {

    int a = 10, b = 20, c = 30, x;
    x = a = b + c, b * a, c - b;
    printf("x=%d,a=%d,b=%d,c=%d", x, a, b, c);
    return 0;
}