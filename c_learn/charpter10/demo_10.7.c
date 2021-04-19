//
// Created by Administrator on 2021/3/15.
//

#include <stdio.h>

int main() {

    int a[3][5];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            scanf("%d", a[i] + j);
        }
    }
    printf("the array is : \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%5d", *(a[i] + j));
        }
        printf("\n");
    }
}
