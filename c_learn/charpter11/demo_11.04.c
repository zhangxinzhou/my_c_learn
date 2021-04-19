//
// Created by Administrator on 2021/3/25.
//

#include <stdio.h>

struct Book {
    char cName[20];
    int iNumber;
    char cS[20];
} book = {"electric", 56, "134-467"};

int main() {

    struct Book *pStruct = &book;
    printf("------the book's information-----\n");
    printf("the type of the book is : %s\n", (*pStruct).cName);
    printf("the number of the book is : %d\n", (*pStruct).iNumber);
    printf("the cs of the book is : %s\n", (*pStruct).cS);
    return 0;
}
