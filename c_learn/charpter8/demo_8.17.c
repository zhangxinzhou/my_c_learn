//
// Created by Administrator on 2021/3/2.
//

#include <stdio.h>
#include <string.h>

int main() {

    char str1[30], str2[30];
    printf("原来的密码:\n");
    gets(str1);
    printf("重新设置密码:\n");
    gets(str2);
    printf("原来的密码:\n");
    puts(str1);
    printf("重新设置密码:\n");
    puts(str2);
    strcpy(str1, str2);
    printf("重新设置密码成功,新的密码如下:\n");
    puts(str1);

    return 0;

}
