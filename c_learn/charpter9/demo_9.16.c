//
// Created by Administrator on 2021/3/10.
//

#include <stdio.h>

extern char *GetString(char *pString);

extern void ShowString(char *pString);

int main() {

    char *pMyString = GetString("somebody do something");
    ShowString(pMyString);
    return 0;
}

extern void ShowString(char *pString) {
    printf("%s\n", pString);
}

extern char *GetString(char *pString) {
    return pString;
}