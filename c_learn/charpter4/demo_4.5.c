//
// Created by Administrator on 2021/2/20.
//

#include <stdio.h>

int main() {

    int iNumber1 = 3;
    int iNumber2 = 3;

    int iResultPreA, iResultLastA;
    int iResultPreD, iResultLastD;

    iResultPreA = ++iNumber1;
    iResultLastA = iNumber2++;

    printf("the addself ...\n");
    printf("the iNumber1 is : %d\n", iNumber1);
    printf("the iResultPreA is :%d\n", iResultPreA);
    printf("the iNumber2 is :%d\n", iNumber2);
    printf("the iResultLastA is :%d\n", iResultLastA);

    iNumber1 = 3;
    iNumber2 = 3;


    iResultPreD = --iNumber1;
    iResultLastD = iNumber2--;

    printf("the deleteself ...\n");
    printf("the iNumber1 is :%d\n", iNumber1);
    printf("the iResultPreD is :%d\n", iResultPreD);
    printf("the iNumber2 is :%d\n", iNumber2);
    printf("the iResultLastD is :%d\n", iResultLastD);
}