//
// Created by Administrator on 2021/2/26.
//

#include <stdio.h>

int main() {

    int i, j, k;
    for (int i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
