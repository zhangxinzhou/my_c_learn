//
// Created by Administrator on 2021/2/20.
//

#include <stdio.h>

int main() {

    int iNumber;
    printf("please enter a number\n");
    scanf("%d", &iNumber);
    if (iNumber % 2 == 0) {
        printf("%d is even number\n", iNumber);
    } else {
        printf("%d is odd number\n", iNumber);
    }
    return 0;
}
