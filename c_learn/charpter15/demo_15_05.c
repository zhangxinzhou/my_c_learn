//
// Created by Administrator on 2021/4/6.
//

#include <stdio.h>
#include <process.h>

void main() {
    printf("please input filename:\n");
    char filename[30];
    scanf("%s", filename);
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("can not open!\npress any key to continue\n");
        getchar();
        exit(0);
    }
    int i = 88;
    fprintf(fp, "%c", i);
    fclose(fp);
}
