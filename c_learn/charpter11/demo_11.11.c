//
// Created by Administrator on 2021/3/29.
//

#include <stdio.h>
#include <stdlib.h>

struct Game {
    char cName[20];
    int iNumber;
    struct Game *pNext;
};

int iCount;

struct Game *Create() {
    struct Game *pHead = NULL;
    struct Game *pEnd, *pNew;
    iCount = 0;
    pEnd = pNew = (struct Game *) malloc(sizeof(struct Game));
    printf("please first enter Name ,then Number\n");
    scanf("%s", &pNew->cName);
    scanf("%d", &pNew->iNumber);
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
        pNew = (struct Game *) malloc(sizeof(struct Game));
        scanf("%s", &pNew->cName);
        scanf("%d", &pNew->iNumber);
    }
    free(pNew);
    return pHead;
}

void Print(struct Game *pHead) {
    struct Game *pTemp;
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

struct Game *Insert(struct Game *pHead) {
    struct Game *pNew;
    printf("-----Insert member at first----\n");
    pNew = (struct Game *) malloc(sizeof(struct Game));
    scanf("%s", &pNew->cName);
    scanf("%d", &pNew->iNumber);

    pNew->pNext = pHead;
    pHead = pNew;
    iCount++;
    return pHead;
}

void Delete(struct Game *pHead, int iIndex) {


    struct Game *pTemp;
    struct Game *pPre;
    pTemp = pHead;
    pPre = pTemp;

    printf("----delete NO%d member----\n", iIndex);
    for (int i = 0; i < iIndex; ++i) {
        pPre = pTemp;
        pTemp = pTemp->pNext;
    }
    pPre->pNext = pTemp->pNext;
    free(pTemp);
    iCount--;

}


int main() {

    struct Game *pHead = Create();
    pHead = Insert(pHead);
    Delete(pHead, 2);
    Print(pHead);
    return 0;
}