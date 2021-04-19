//
// Created by Administrator on 2021/2/20.
//

#include <stdio.h>

int main() {


    int iNumber1, iNumber2, iNumber3, iResult = 0;
    iNumber1 = 5;
    iNumber2 = 6;
    iNumber3 = 9;

    iResult = iNumber1 + iNumber2 - iNumber3;
    printf("the result is :%d\n", iResult);

    iResult = iNumber1 + iNumber2 * iNumber3;
    printf("the result is :%d\n", iResult);

    iResult = (iNumber1 + iNumber2) * iNumber3;
    printf("the result is :%d\n", iResult);
}