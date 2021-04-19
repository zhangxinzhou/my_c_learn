//
// Created by Administrator on 2021/2/25.
//

#include <stdio.h>

int main() {


    int num;
    printf("please input a number");
    while (num != 147) {
        scanf("%d", &num);
        if (num < 147) {
            printf("你猜小了\n");
        } else if (num > 147) {
            printf("你猜大了\n");
        } else if (num == 147) {
            printf("你猜对了\n");
        }
    }
    return 0;

}