//
// Created by Administrator on 2021/3/1.
//

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

    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; ++j) {
            if (a[j] > a[i]) {
                iTemp = a[i];
                a[i] = a[j];
                a[j] = iTemp;
            }
        }
    }

    for (int i = 0; i < 10; ++i) {
        printf("%d\t", a[i]);
    }
    return 0;

}