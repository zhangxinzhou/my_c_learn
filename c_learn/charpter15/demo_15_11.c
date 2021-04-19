//
// Created by Administrator on 2021/4/12.
//

#include <stdio.h>
#include <process.h>

void main() {
    char ch, filename1[30], filename2[30];
    printf("please input filename1:\n");
    scanf("%s", filename1);
    printf("please input filename2:\n");
    scanf("%s", filename2);
    FILE *fp1 = fopen(filename1, "ab+");
    FILE *fp2 = fopen(filename2, "rb");
    if (fp1 == NULL || fp2 == NULL) {
        printf("can not open, press any key to continue\n");
        getchar();
        exit(0);
    }
    fseek(fp1, 0L, 2);
    while ((ch = fgetc(fp2)) != EOF) {
        fputs(ch, fp1);
    }
    fclose(fp1);
    fclose(fp2);
}
