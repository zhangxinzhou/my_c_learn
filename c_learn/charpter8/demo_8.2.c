//
// Created by Administrator on 2021/2/27.
//

#include <stdio.h>

int main() {

    int grade[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int total = 0;
    float avg;
    for (int i = 0; i < 10; i++) {
        total += grade[i];
    }
    avg = 1.0 * total / 10;
    printf("the student's average score is %f\n", avg);
}
