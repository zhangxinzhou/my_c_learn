//
// Created by Administrator on 2021/2/28.
//

#include <stdio.h>

int main() {

    char cString[100];
    int iIndex, iWord = 1;
    char cBlank;
    gets(cString);
    if (cString[0] == '\n') {
        printf("there is no char!\n");
    } else if (cString[0] == ' ') {
        printf("first char just is a blank!\n");
    } else {
        for (int i = 0; cString[i] != '\0'; ++i) {
            cBlank = cString[i];
            if (cBlank == ' ') {
                iWord++;
            }
        }
        printf("%d", iWord);
    }

    return 0;
}
