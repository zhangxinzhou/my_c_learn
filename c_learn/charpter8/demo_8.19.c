//
// Created by Administrator on 2021/3/2.
//

#include <stdio.h>
#include <string.h>

int main() {

    char user[20] = {"exit"};
    char ustr[20];
    while (strcmp(user, ustr) != 0) {
        printf("请输入字符串:\n");
        gets(ustr);
        puts(ustr);
    }
    return 0;
}
