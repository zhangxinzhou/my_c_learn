//
// Created by Administrator on 2021/4/5.
//

#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *fp;
    char ch;
    if ((fp = fopen("E:\\exp01.txt", "w")) == NULL) {
        printf("can not open file\n");
        exit(0);
    }
    ch = getchar();
    while (ch != '#') {
        fputc(ch, fp);
        ch = getchar();
    }
    fclose(fp);
}