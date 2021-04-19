//
// Created by Administrator on 2021/2/23.
//

#include <stdio.h>

int main() {

    int year;
    printf("please enter a year\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("year %d is a leap year\n", year);
    } else {
        printf("year %d isn't a leap year\n", year);
    }
    return 0;
}