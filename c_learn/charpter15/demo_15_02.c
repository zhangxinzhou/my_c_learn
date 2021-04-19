//
// Created by Administrator on 2021/4/6.
//

#include <stdio.h>

void main() {
    FILE *fp = fopen("E:\\love.txt", "r");
    char ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
}