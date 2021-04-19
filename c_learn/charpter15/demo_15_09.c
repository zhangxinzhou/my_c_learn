//
// Created by Administrator on 2021/4/12.
//

#include <stdio.h>
#include <process.h>

void main() {

    char ch, filename[50];
    printf("please input filename:\n");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("can not open this file.\n");
        exit(0);
    }
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = fgetc(fp);
    }
    rewind(fp);
    printf("\n");
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = fgetc(fp);
    }
    printf("\n");
    fclose(fp);
}