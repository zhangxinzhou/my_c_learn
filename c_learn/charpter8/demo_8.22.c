//
// Created by Administrator on 2021/3/3.
//

#include <stdio.h>
#include <string.h>

int main() {

    char String[5] = {"live"};
    char Reverse[5] = {0};
    int size = sizeof(String);
    for (int i = 0; i < 4; ++i) {
        Reverse[size - i - 2] = String[i];
    }
    printf("string is %s\n", String);
    printf("reverse is %s\n", Reverse);
    return 0;
}
