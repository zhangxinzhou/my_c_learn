//
// Created by Administrator on 2021/4/9.
//

#include <stdio.h>
#include <process.h>

struct address_list {
    char name[10];
    char adr[20];
    char tel[15];
} info[100];

void save(char *name, int n) {
    FILE *fp = fopen(name, "wb");
    if (fp == NULL) {
        printf("cannot open file\n");
        exit(0);
    }
    for (int i = 0; i < n; ++i) {
        if (fwrite(&info[i], sizeof(struct address_list), 1, fp) != 1) {
            printf("file write error\n");
        }
    }
    fclose(fp);
}

void show(char *name, int n) {
    FILE *fp = fopen(name, "rb");
    if (fp == NULL) {
        printf("cannot open file\n");
        exit(0);
    }
    for (int i = 0; i < n; ++i) {
        fread(&info[i], sizeof(struct address_list), 1, fp);
        printf("%15s%20s%20s\n", info[i].name, info[i].adr, info[i].tel);
    }
    fclose(fp);
}

void main() {
    char filename[50];
    printf("how many ?\n");
    int n;
    scanf("%d", &n);
    printf("please input filename:\n");
    scanf("%s", filename);
    printf("please input name,address,telephone:\n");
    for (int i = 0; i < n; ++i) {
        printf("NO%d\n", i + 1);
        scanf("%s%s%s", info[i].name, info[i].adr, info[i].tel);
        save(filename, n);
    }
    show(filename, n);
}