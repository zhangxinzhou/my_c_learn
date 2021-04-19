//
// Created by Administrator on 2021/3/31.
//

#include <stdio.h>

int main() {
    unsigned result;
    int age1, age2;
    printf("please input age1:");
    scanf("%d", &age1);
    printf("please input age2:");
    scanf("%d", &age2);
    printf("age1=%d,age2=%d", age1, age2);
    result = age1 & age2;
    printf("\n age1&age2=%u\n", result);
}