//
// Created by Administrator on 2021/2/23.
//

#include <stdio.h>

int main() {

    int score;
    puts("please your score:");
    scanf("%d", &score);
    if (score >= 60) {
        printf("your grade is %d\n", score);
        printf("pass the exam\n");
    }

    if (score < 60) {
        printf("your grade is %d\n", score);
        printf("don't pass the exam\n");
    }
    return 0;
}
