//
// Created by Administrator on 2021/3/3.
//

#include <stdio.h>
#include <time.h>

int main() {

    int command[4] = {0, 1, 2, 3};
    int num;
    struct tm *sysTime;
    printf("input number 0 if you need help 0!\n");
    printf("input you command:\n");

    while (1) {
        scanf("%d", &num);

        if (command[0] == num) {
            printf("number 1 show sys date,number 2 show sys time,number 3 exit!");
        } else if (command[1] == num) {
            time_t nowTime;
            time(&nowTime);
            sysTime = localtime(&nowTime);
            printf("sys date :%d-%d-%d \n", 1900 + sysTime->tm_year, sysTime->tm_mon, sysTime->tm_mday);
        } else if (command[2] == num) {
            time_t nowTime;
            time(&nowTime);
            sysTime = localtime(&nowTime);
            printf("sys time:%d:%d:%d \n", sysTime->tm_hour, sysTime->tm_min, sysTime->tm_sec);
        } else if (command[3] == num) {
            return 0;
        }
        printf("input you command:\n");
    }
    return 0;
}
