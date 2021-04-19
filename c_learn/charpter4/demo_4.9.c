//
// Created by Administrator on 2021/2/21.
//

#include <stdio.h>

int main() {

    int iValue;
    iValue = 7;

    iValue += iValue *= iValue /= iValue - 5;
    printf("the result is %d\n", iValue);
    return 0;
}