//
// Created by Administrator on 2021/3/5.
//

#include <stdio.h>

int main() {

    int aa[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("%d\n", aa);
    printf("%d\n", &aa);
    printf("%d\n", aa[0]);

    int len = sizeof(aa) / sizeof(int);
    printf("size=%d\n", len);
    for (int i = 0; i < len; ++i) {
        printf("%-10d %-10d %-10d\n", i, aa[i], &aa[i]);
    }

    int bb[9];

    printf("========================");
    for (int i = 0; i < 10; ++i) {
        printf("%d\n", bb[i]);
    }
}
