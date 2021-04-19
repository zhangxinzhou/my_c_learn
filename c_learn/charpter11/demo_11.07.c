//
// Created by Administrator on 2021/3/25.
//

#include <stdio.h>

struct Student {
    char cName[20];
    float fScore[3];
} student = {"su yu qun", 95.5f, 89.0f, 93.5f};

void Display(struct Student stu) {
    printf("----- Information -----\n");
    printf("Name: %s\n", stu.cName);
    printf("Score1: %.2f\n", stu.fScore[0]);
    printf("Score2: %.2f\n", stu.fScore[1]);
    printf("Score3: %.2f\n", stu.fScore[2]);
    float avg = (stu.fScore[0] + stu.fScore[1] + stu.fScore[2]) / 3;
    printf("avg: %.2f\n", avg);
}

int main() {
    Display(student);
    return 0;
}