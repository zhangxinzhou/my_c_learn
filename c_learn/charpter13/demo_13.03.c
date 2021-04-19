//
// Created by Administrator on 2021/4/1.
//

#include <stdio.h>

void main() {
    unsigned result;
    int a;
    printf("please input a:");
    scanf("%d", &a);
    printf("a=%d", a);
    result = ~a;
    printf("\nn~a=%o\n", result);
}

