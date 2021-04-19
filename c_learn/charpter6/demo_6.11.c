//
// Created by Administrator on 2021/2/24.
//

#include <stdio.h>

int main() {

    int month;
    printf("please enter a month:\n");
    scanf("%d", &month);
    switch (month) {
        case 3:
        case 4:
        case 5:
            printf("%d is spring\n", month);
            break;
        case 6:
        case 7:
        case 8:
            printf("%d is summer\n", month);
            break;
        case 9:
        case 10:
        case 11:
            printf("%d is autumn\n", month);
            break;
        case 12:
        case 1:
        case 2:
            printf("%d is winter\n", month);
            break;
        default:
            printf("error!!\n");
    }
    return 0;
}