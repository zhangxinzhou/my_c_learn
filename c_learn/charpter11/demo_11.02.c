//
// Created by Administrator on 2021/3/24.
//

#include <stdio.h>

struct Student {
    char cName[20];
    char cSex;
    char iGrade;
} student1 = {"HanXue", 'W', 3};

int main() {
    struct Student student2 = {"WangJiaSheng", 'M', 3};

    printf("the student1's information:\n");
    printf("name : %s\n", student1.cName);
    printf("sex : %c\n", student1.cSex);
    printf("grade : %d\n", student1.iGrade);

    printf("the student2's information:\n");
    printf("name : %s\n", student2.cName);
    printf("sex : %c\n", student2.cSex);
    printf("grade : %d\n", student2.iGrade);
}