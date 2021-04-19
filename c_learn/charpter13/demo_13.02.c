//
// Created by Administrator on 2021/4/1.
//

#include <stdio.h>

int main() {
    int a = 0xEFCA, result;
    result = a | a;
    printf("a|a=%X\n", result);
    return 0;
}
