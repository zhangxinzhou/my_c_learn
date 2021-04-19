//
// Created by Administrator on 2021/3/16.
//

#include <stdio.h>

int main() {

    int a[3][3];
    printf("please input:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", *(a + i) + j);
        }
    }

    for (int i = 0; i < 3; ++i) {
        printf("the line [%d] is : \n", (i + 1));
        for (int j = 0; j < 3; ++j) {
            printf("%5d", *(*(a + i) + j));
        }
        printf("\n");
    }

}