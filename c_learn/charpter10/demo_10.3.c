//
// Created by Administrator on 2021/3/13.
//

#include <stdio.h>

int main() {

    int i, j, c;
    long *p, *q, *n;

    printf("please input the numbers:\n");
    scanf("%ld,ld", &i, &j);

    c = i + j;
    p = &i;
    q = &j;
    n = &c;

    printf("%ld\n", &*p);
    printf("%ld\n", &*q);
    printf("%ld\n", &*n);


    return 0;
}
