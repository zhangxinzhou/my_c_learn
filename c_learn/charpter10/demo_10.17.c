//
// Created by Administrator on 2021/3/19.
//

#include <stdio.h>

void order(int *p, int n) {

    int t;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (*(p + j) > *(p + j + 1)) {
                t = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = t;
            }
        }
    }

    printf("the array after order:");
    for (int i = 0; i < n; ++i) {
        if (i % 5 == 0) {
            printf("\n");
        }
        printf("%5d", *(p + i));
    }
    printf("\n");
}

int main() {

    int a[20], n;
    printf("please input the length number of the array : \n");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", a + i);
    }
    order(a, n);
}
