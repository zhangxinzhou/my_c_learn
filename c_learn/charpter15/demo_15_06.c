//
// Created by Administrator on 2021/4/6.
//

#include <stdio.h>
#include <process.h>

void main() {
    printf("please input filename:\n");
    char filename[30];
    scanf("%s", filename);
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("can not open!\npress any key to continue\n");
        getchar();
        exit(0);
    }
    char i, j;
    for (i = 0; i < 5; ++i) {
        fscanf(fp, "%c", &j);
        printf("%d is : %5d\n", i + 1, j);
    }
    fclose(fp);
}