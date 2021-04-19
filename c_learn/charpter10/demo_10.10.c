//
// Created by Administrator on 2021/3/16.
//

#include <stdio.h>

int main() {

    char *string = "hello";
    char sss1[] = "hello";
    printf("%s %d\n", string, &string);
    printf("%s %d\n", sss1, &sss1);
    printf("\n");
    return 0;
}

