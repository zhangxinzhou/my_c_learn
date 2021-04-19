//
// Created by Administrator on 2021/4/13.
//

#include <stdio.h>
#include <stdlib.h>

int main() {

    int *pInt;
    pInt = (int *) malloc(sizeof(int));
    *pInt = 100;

    printf("%d\n", *pInt);
    free(pInt);
    printf("%d\n", *pInt);
    return 0;
}