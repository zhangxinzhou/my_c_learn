//
// Created by Administrator on 2021/3/20.
//

#include <stdio.h>

#define N 4

void max(int (*a)[N], int m) {

    int value, sum = 0;
    for (int i = 0; i < m; ++i) {
        value = *(*(a + i));
        for (int j = 0; j < N; ++j) {
            if (*(*(a + i) + j) > value) {
                value = *(*(a + i) + j);
            }
        }
        printf("line %d : the max is %d\n", i, value);
        sum = sum + value;
    }
    printf("\n");
    printf("the sum is : %d\n", sum);
}

int main() {

    int a[3][N];
    int (*p)[N] = &a[0];
    printf("please input : \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    max(p, 3);
}