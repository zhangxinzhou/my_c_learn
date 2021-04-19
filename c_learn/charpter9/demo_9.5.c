//
// Created by Administrator on 2021/3/5.
//

#include <stdio.h>

int fun(int lim, int aa[]) {

    int k = 0;
    for (int i = 2; i < lim; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                break;
            }
            if (j == (i - 1)) {
                aa[k++] = i;
            }
        }
    }
    return k;
}

int main() {


    int aa[100];
    fun(100, aa);
    printf("100以内的素数有:\n");
    for (int i = 0; i < 25; ++i) {
        printf("%d\n", aa[i]);
    }
    printf("\n");
    return 0;
}
