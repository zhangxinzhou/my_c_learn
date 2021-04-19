//
// Created by Administrator on 2021/2/25.
//

#include <stdio.h>

int main() {

    int n, i = 1, result = 1;
    printf("please enter a number\n");
    scanf("%d", &n);
    for (; i <= n; i++) {
        result *= i;
    }
    printf("%d!=%d\n", n, result);
    return 0;
}
