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
            printf("���С��\n");
        } else if (num > 147) {
            printf("��´���\n");
        } else if (num == 147) {
            printf("��¶���\n");
        }
    }
    return 0;

}