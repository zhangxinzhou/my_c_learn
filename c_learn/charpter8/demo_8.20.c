//
// Created by Administrator on 2021/3/3.
//

#include <stdio.h>
#include <string.h>

int main() {

    char text[20], change[20];
    printf("输入一个字符串:\n");
    scanf("%s", &text);
    strcpy(change, text);
    strupr(change);
    printf("转换成大写字符的字符串为:%s\n", change);
    return 0;
}