//
// Created by Administrator on 2021/3/12.
//

#include <stdio.h>

int main() {

    int a;
    int *ipointer1;
    printf("please inter you data:\n");
    scanf("%d", &a);
    ipointer1 = &a;
    printf("you data is :%x, address is %p\n", *ipointer1, ipointer1);
    return 0;
}