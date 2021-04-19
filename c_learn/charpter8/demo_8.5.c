//
// Created by Administrator on 2021/2/27.
//

#include <stdio.h>

int main() {

    int a[10] = {1, 5, 6, 8, 2, 1, 4, 5, 2, 5};
    int b[10] = {0};
    for (int i = 0; i < 10; ++i) {
        b[a[i]]++;
    }
    for (int i = 0; i < 10; ++i) {
        printf("%d----->%d\n", i, b[i]);
    }
    return 0;
}