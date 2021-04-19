//
// Created by Administrator on 2021/4/6.
//
#include <stdio.h>
#include <process.h>

void main() {
    char filename[30], str[30];
    printf("please input filename:\n");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("can not open!\npress any key to continue:\n");
        getchar();
        exit(0);
    }
    fgets(str, sizeof(str), fp);
    printf("%s", str);
    printf("\n");
    fclose(fp);
}
