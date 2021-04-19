//
// Created by Administrator on 2021/4/12.
//

#include <stdio.h>
#include <process.h>

int main() {
    char ch, filename[50];
    printf("please input filename:\n");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("cannot open this file.\n");
        exit(0);
    }
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);
        ch = fgetc(fp);
    }
    int n = ftell(fp);
    if (6 == n) {
        printf("\nset password success\n");
    } else {
        printf("\nset password fail\n");
    }
    fclose(fp);
    return 0;
}
