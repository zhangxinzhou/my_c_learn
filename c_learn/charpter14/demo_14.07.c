//
// Created by Administrator on 2021/4/5.
//

#line 1000 "13.7.c"

#include <stdio.h>

void main() {
    printf("1.the current line number : %d\n", __LINE__);
    printf("2.the current line number : %d\n", __LINE__);
    printf("%s\n", __FILE__);
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%d\n", __STDC__);
}