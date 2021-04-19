//
// Created by Administrator on 2021/4/1.
//

#include <stdio.h>

int right(unsigned value, int n) {
    unsigned z;
    z = (value << (32 - n)) | (value >> n);
    return z;
}

void main() {
    unsigned a;
    int n;
    printf("please input a number:\n");
    scanf("%o", &a);
    printf("please input the number of displacement (>0) :\n");
    scanf("%d", &n);
    printf("the result is %o\n", right(a, n));
}
