//
// Created by Administrator on 2021/2/25.
//

#include <stdio.h>

int main() {

    int iNumber;
    int iSum = 0;
    for (iNumber = 1; iNumber <= 100; iNumber++) {
        iSum = iNumber + iSum;
    }
    printf("the result is : %d\n", iSum);
    iSum = 0;
    iNumber = 1;
    while (iNumber <= 100) {
        iSum = iSum + iNumber;
        iNumber++;
    }
    printf("the result is : %d\n", iSum);
    return 0;
}
