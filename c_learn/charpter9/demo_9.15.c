//
// Created by Administrator on 2021/3/10.
//

#include <stdio.h>

static char *GetString(char *pString) {
    return pString;
}

static void ShowString(char *pString) {
    printf("%s\n", pString);
}

int main() {

    char *pMyString = GetString("Hello MingRi!");
    ShowString(pMyString);
    return 0;
}