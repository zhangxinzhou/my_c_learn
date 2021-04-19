//
// Created by Administrator on 2021/4/13.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *iIntMalloc = (int *) malloc(sizeof(int));
    *iIntMalloc = 10240;
    printf("there is %d clothes", *iIntMalloc);
    return 0;
}