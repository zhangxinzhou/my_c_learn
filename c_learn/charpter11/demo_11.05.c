//
// Created by Administrator on 2021/3/25.
//

#include <stdio.h>
#include <string.h>

struct Sweat {
    char cName[20];
    int iNumber;
    char cColor[20];
} sweat;

int main() {

    struct Sweat *pStruct = &sweat;
    strcpy(pStruct->cName, "mao ni wai tao");
    pStruct->iNumber = 599;
    strcpy(pStruct->cColor, "pink");

    printf("------the book's information-----\n");
    printf("classes : %s\n", sweat.cName);
    printf("price : %d\n", sweat.iNumber);
    printf("color : %s\n", sweat.cColor);

    return 0;
}