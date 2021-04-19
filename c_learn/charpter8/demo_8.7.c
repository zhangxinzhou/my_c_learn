//
// Created by Administrator on 2021/2/28.
//

#include <stdio.h>

int main() {

    int a[2][3], b[3][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("输出二维数组:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // 行列转换
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            b[j][i] = a[i][j];
        }
    }
    printf("输出转置后二维数组\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;

}
