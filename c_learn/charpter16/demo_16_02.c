//
// Created by Administrator on 2021/4/13.
//

#include <stdio.h>

void DisplayB(char *string) {
    printf("%s\n", string);
}

void DisplayA(char *string) {
    char String[20] = "LoveWorld";
    printf("%s\n", string);
    DisplayB(String);
}

int main() {
    char String[20] = "LoveChina";
    DisplayA(String);
    return 0;
}
