//
// Created by Administrator on 2021/3/26.
//

#include <stdio.h>
#include <stdlib.h>

struct Clerk {
    char cName[20];
    int iNumber;
    struct Clerk *pNext;
};

int iCount;

struct Clerk *Create() {
    struct Clerk *pHead = NULL;
    struct Clerk *pEnd, *pNew;
    iCount = 0;
    pEnd = pNew = (struct Clerk *) malloc(sizeof(struct Clerk));
    printf("please first enter name ,then number\n");
    scanf("%s", &pNew->cName);
    scanf("%s", &pNew->iNumber);
    while (pNew->iNumber != 0) {
        iCount++;
        if (iCount == 1) {
            pNew->pNext = pHead;
            pEnd = pNew;
            pHead = pNew;
        } else {
            pNew->pNext = NULL;
            pEnd->pNext = pNew;
            pEnd = pNew;
        }
        pNew = (struct Clerk *) malloc(sizeof(struct Clerk));
        scanf("%s", &pNew->cName);
        scanf("%d", &pNew->iNumber);
    }
    free(pNew);
    return pHead;
}

void Print(struct Clerk *pHead) {
    struct Clerk *pTemp;
    int iIndex = 1;

    printf("----the list has %d members:----\n", iCount);
    printf("\n");
    pTemp = pHead;

    while (pTemp != NULL) {
        printf("the NO%d member is : \n", iIndex);
        printf("the name is : %s\n", pTemp->cName);
        printf("the number is : %d\n", pTemp->iNumber);
        printf("\n");
        pTemp = pTemp->pNext;
        iIndex++;
    }
}

int main() {
    struct Clerk *pHead = Create();
    Print(pHead);
    return 0;
}