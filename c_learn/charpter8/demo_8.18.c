//
// Created by Administrator on 2021/3/2.
//

#include <stdio.h>
#include <string.h>

int main() {

    char str1[30] = "sell sell sell", str2[30] = " apple";
    printf("输出前一句:\n");
    puts(str1);
    printf("输出后一句:\n");
    puts(str2);
    strcat(str1, str2);
    printf("整句为:\n");
    puts(str1);
    return 0;
}
