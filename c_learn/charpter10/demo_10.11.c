//
// Created by Administrator on 2021/3/17.
//

#include <stdio.h>

int main() {

    char str1[] = "you are beautiful", str2[30], *p1, *p2;
    p1 = str1;
    p2 = str2;
    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    printf("Now the str2 is : \n");
    puts(str2);
}