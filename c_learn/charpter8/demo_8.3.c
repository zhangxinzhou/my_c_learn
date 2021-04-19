//
// Created by Administrator on 2021/2/27.
//

#include <stdio.h>

int main() {

    int grade[7] = {100};
    int total = 0;
    float avg;
    for (int i = 0; i < 7; ++i) {
        total += grade[i];
        printf("%d\n", grade[i]);
    }
    avg = 1.0 * total / 7;
    printf("这一周xxx的平均值%f\n", avg);
}
