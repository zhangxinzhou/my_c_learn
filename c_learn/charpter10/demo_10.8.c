//
// Created by Administrator on 2021/3/15.
//

#include <stdio.h>

int main() {

    int a[3][5];
    int (*p)[5] = &a[0];
    printf("please input : \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", (*(p + i) + j));
        }
    }

    p = &a[2];
    printf("the array is : \n");
    for (int j = 0; j < 5; ++j) {
        printf("%5d", *(*(p) + j));
    }
    printf("\n");


}
