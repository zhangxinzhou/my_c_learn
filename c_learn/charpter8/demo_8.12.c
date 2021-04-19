//
// Created by Administrator on 2021/3/1.
//

#include <stdio.h>

int main() {

    int a[10];
    int iTemp;
    int iPos;
    printf("为数组元素赋值:\n");
    for (int i = 0; i < 10; ++i) {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }

    // 从搞到地排序
    for (int i = 0; i < 9; ++i) {
        iTemp = a[i];
        iPos = i;
        for (int j = i + 1; j < 10; ++j) {
            if (a[j] > iTemp) {
                iTemp = a[j];
                iPos = j;
            }
        }
        // 交换两个元素值
        a[iPos] = a[i];
        a[i] = iTemp;
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;

}