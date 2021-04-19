//
// Created by Administrator on 2021/3/18.
//

#include <stdio.h>

void SUM(int *p, int n) {

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum = sum + *(p + i);
    }
    printf("total area is : %d\n", sum);
}

int main() {

    int *pointer, a[7];
    pointer = a;
    printf("please input : \n");
    for (int i = 0; i < 7; ++i) {
        scanf("%d", &a[i]);
    }
    SUM(pointer, 7);
    return 0;
}
