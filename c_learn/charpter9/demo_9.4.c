//
// Created by Administrator on 2021/3/4.
//

#include <stdio.h>

void Scrip(char *lead);

int main() {


    char cSelect[] = "";
    printf("the leader choise:");
    scanf("%s", &cSelect);
    Scrip(cSelect);
    return 0;
}

void Scrip(char *lead) {
    printf("%s start the action\n", lead);
}