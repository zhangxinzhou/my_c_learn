//
// Created by Administrator on 2021/3/31.
//

#include <stdio.h>

enum Color {
    Red = 1, Blue, Green
} color;

int main() {

    int icolor;
    scanf("%d", &icolor);
    switch (icolor) {
        case Red:
            printf("the choice is Red\n");
            break;
        case Blue:
            printf("the choice is Blue\n");
            break;
        case Green:
            printf("the choice is Green\n");
            break;
        default:
            printf("???\n");
            break;
    }
}