//
// Created by Administrator on 2021/3/25.
//

#include <stdio.h>

struct Student {
    char cName[20];
    int iNumber;
    char cSex;
    int iGrade;
} student[5] = {
        {"wang jia sheng", 12032212, 'M', 3},
        {"yu long jiao",   123,      'W', 3},
        {"jiang xue huan", 456,      'W', 3},
        {"zhang meng",     789,      'W', 3},
        {"han liang",      999,      'M', 3}
};

int main() {
    struct Student *pStruct = &student[0];
    for (int i = 0; i < 5; i++, pStruct++) {
        printf("NO%d student : \n", i + 1);
        printf("Name: %s,Number: %d, Sex: %c, Grade: %d \n", pStruct->cName, pStruct->iNumber, pStruct->cSex,
               pStruct->iGrade);
    }

    return 0;

}