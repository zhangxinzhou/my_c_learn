//
// Created by Administrator on 2021/3/11.
//

#include <stdio.h>
#include <math.h>

int main() {

    int iAbsoluteNumber;
    int iNumber;
    int differ, ab;
    printf("input you age\n");
    scanf("%d,%d", &iAbsoluteNumber, &iNumber);
    differ = iAbsoluteNumber - iNumber;
    ab = abs(differ);
    printf("the age diff is %d", ab);
    return 0;
}