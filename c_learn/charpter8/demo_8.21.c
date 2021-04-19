//
// Created by Administrator on 2021/3/3.
//

#include <stdio.h>
#include <string.h>

int main() {

    char text[50];
    printf("输出一个密码:\n");
    scanf("%s", &text);

    if (strlen(text) == 6) {
        printf("you password length is 6\n");
    } else {
        printf("you password length is not 6\n");
    }

    return 0;
}