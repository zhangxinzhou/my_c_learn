//
// Created by Administrator on 2021/4/4.
//

#include <stdio.h>

#define MIN(a, b) (a<b?a:b)

int main() {
    int x = 15, y = 6;
    printf("x,y位\n");
    printf("%d,%d", x, y);
    printf("the min number is : %d\n", MIN(x, y));
    return 0;
}