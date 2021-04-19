//
// Created by Administrator on 2021/2/25.
//

#include <stdio.h>

int main() {

    int num = 0;
    scanf("%d", &num);
    do {
        num++;
        printf("还能承载 %d 人,\n", 26 - num);
    } while (num <= 25);
    printf("座位已满,不能在承载了\b");
    return 0;
}
