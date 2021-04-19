//
// Created by Administrator on 2021/3/23.
//

#include <stdio.h>

int *per(int a, int b);

int Perimeter;

int main() {

    int iWidth, iLength;
    printf("please input the length of a square:\n");
    scanf("%d", &iLength);
    printf("please input the width of a square:\n");
    scanf("%d", &iWidth);
    int *iResult = per(iWidth, iLength);
    printf("the perimeter is %d", *iResult);
}

int *per(int a, int b) {
    Perimeter = (a + b) * 2;
    return &Perimeter;
}