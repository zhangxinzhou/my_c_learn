//
// Created by Administrator on 2021/2/23.
//

#include <stdio.h>

int main() {

    int price = 97, gue;
    printf("please enter a number:\n");
    scanf("%d", &gue);
    if (gue < price) {
        printf("you guess the number is small\n");
    } else if (gue > price) {
        printf("you guess the number is big\n");
    } else {
        printf("you have guessed is\n");
    }
    return 0;
}
