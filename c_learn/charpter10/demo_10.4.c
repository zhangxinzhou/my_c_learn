//
// Created by Administrator on 2021/3/13.
//

#include <stdio.h>

int main() {

    int a = 6 / (3 - 1) + 1;
    int *p = &a;
    printf("need %d times\n", *&a);
    return 0;
}
