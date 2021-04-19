//
// Created by Administrator on 2021/3/9.
//

#include <stdio.h>

void DisplayNames(char **cNameArray);

char *cNames[] = {"A", "B", "C", "D", "E", "F", "end"};

int main() {

    DisplayNames(cNames);
    return 0;
}

void DisplayNames(char **cNameArray) {

    if (*cNameArray == "end") {
        return;
    } else {
        DisplayNames(cNameArray + 1);
        printf("%s\n", *cNameArray);
    }
}