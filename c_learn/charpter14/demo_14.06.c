//
// Created by Administrator on 2021/4/5.
//

#include <stdio.h>

#define STR "believe yourself\n"

int main() {
#ifdef  STR
    printf(STR);
#else
    printf("**do not give up**\n");
#endif
    printf("\n");

#ifndef  ABC
    printf("do not give up");
#else
    printf(STR);
#endif
    return 0;
}