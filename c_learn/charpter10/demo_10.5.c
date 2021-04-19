//
// Created by Administrator on 2021/3/14.
//

#include <stdio.h>

int main() {

    short i;
    short *p;
    printf("please input the number:\n");
    scanf("%d", &i);
    p = &i;
    printf("the result1 is : %d\n", p);
    p++;
    printf("the result2 is : %d\n", p);
    return 0;
}