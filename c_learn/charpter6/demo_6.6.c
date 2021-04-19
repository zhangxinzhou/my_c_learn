//
// Created by Administrator on 2021/2/23.
//

#include <stdio.h>

int main() {

    int num;
    printf("please enter censorship:");
    scanf("%d", &num);
    if (num == 1) {
        printf("the current into first level\n");
    } else if (num == 2) {
        printf("the current into second level\n");
    } else if (num == 3) {
        printf("the current into three level\n");
    } else {
        printf("the current into %d level\n", num);
    }
    return 0;
}
