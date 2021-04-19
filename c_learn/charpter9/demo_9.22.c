//
// Created by Administrator on 2021/3/12.
//

#include <stdio.h>
#include <ctype.h>

void SwitchShow(char c);

int main() {

    char cCharPut;
    char cCharTemp;
    printf("First enter:");
    scanf("%c", &cCharPut);
    SwitchShow(cCharPut);
    cCharTemp = getchar();

    printf("Second enter:");
    scanf("%c", &cCharPut);
    SwitchShow(cCharPut);
    cCharTemp = getchar();

    printf("Third enter:");
    scanf("%c", &cCharPut);
    SwitchShow(cCharPut);

    return 0;
}

void SwitchShow(char cChar) {

    if (isalpha(cChar)) {
        printf("you entered a letter of the alphabet %c\n", cChar);
    }
    if (isdigit(cChar)) {
        printf("you entered the digit %c\n", cChar);
    }
    if (isalnum(cChar)) {
        printf("you entered the alphanumeric character %c\n", cChar);
    } else {
        printf("you entered the character is not alphabet or digit : %c\n", cChar);
    }
}