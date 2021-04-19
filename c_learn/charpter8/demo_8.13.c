//
// Created by Administrator on 2021/3/1.
//

#include <stdio.h>

int main() {

    int a[10];
    int iTemp;
    printf("为数组元素赋值:\n");
    for (int i = 0; i < 10; ++i) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 9; j >= i; j--) {
            if (a[j] < a[j - 1]) {
                iTemp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = iTemp;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;

}