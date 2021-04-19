//
// Created by Administrator on 2021/2/24.
//

#include <stdio.h>

int main() {

    int num;
    printf("please enter a num:");
    scanf("%d", &num);
    if (num == 1) {
        printf("its main view is a triangle\n");
    } else if (num == 2) {
        printf("the top view of cone is circular\n");
    } else if (num == 3) {
        printf("left view of the cone is a triangle\n");
    }
    return 0;
}