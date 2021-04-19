//
// Created by Administrator on 2021/2/24.
//

#include <stdio.h>

int main() {

    int iDay = 0;
    int Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7;
    printf("enter a day of week to get course:\n");
    scanf("%d", &iDay);

    if (iDay > Friday) {
        if (iDay == Saturday) {
            printf("go shopping with friends\n");
        } else {
            printf("at home with families\n");
        }
    } else {
        if (iDay = Monday) {
            printf("have a meeting in the company\n");
        } else {
            printf("working with partner\n");
        }
    }
    return 0;
}
