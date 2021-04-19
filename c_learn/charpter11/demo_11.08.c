//
// Created by Administrator on 2021/3/25.
//

#include <stdio.h>

struct Student {
    char cName[20];
    float fScore[3];
} student = {"su yu qun", 95.5f, 89.0f, 93.5f};

void Display(struct Student *stu) {
    printf("----- Information -----\n");
    printf("Name: %s\n", stu->cName);
    printf("English: %.2f\n", stu->fScore[2]);
    stu->fScore[2] = 90.0f;

}

int main() {
    struct Student *pStruct = &student;
    Display(pStruct);
    printf("change english: %.2f\n", pStruct->fScore[2]);
    return 0;
}