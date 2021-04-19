//
// Created by Administrator on 2021/2/24.
//

#include <stdio.h>

int main() {

    char cGrade;
    printf("please enter your grade\n");
    scanf("%c", &cGrade);
    printf("Grade is about:");
    switch (cGrade) {
        case 'A':
            printf("90~100\n");
            break;
        case 'B':
            printf("80~90\n");
            break;
        case 'C':
            printf("70~80\n");
            break;
        case 'D':
            printf("60~70\n");
            break;
        case 'E':
            printf("50~60\n");
            break;
        case 'F':
            printf("<50\n");
            break;
        default:
            printf("you enter the char is wrong!\n");
            break;
    }
    return 0;
}
