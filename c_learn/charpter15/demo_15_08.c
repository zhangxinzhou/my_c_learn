//
// Created by Administrator on 2021/4/11.
//

#include <stdio.h>
#include <process.h>

void main() {
    char filename[30], str[50];
    printf("please input filename:\n");
    scanf("%s", filename);
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) {
        printf("can not open!\npress any key to continue\n");
        getchar();
        exit(0);
    }

    printf("please input string:\n");
    getchar();
    gets(str);
    fputs(str, fp);
    fclose(fp);

    if ((fp = fopen(filename, "rb")) == NULL) {
        printf("can not open!\npress any key to continue\n");
        getchar();
        exit(0);
    }

    fseek(fp, 4L, 0);
    fgets(str, sizeof(str), fp);
    putchar("\n");
    puts(str);
    fclose(fp);
}