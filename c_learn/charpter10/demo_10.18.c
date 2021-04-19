//
// Created by Administrator on 2021/3/19.
//

#include <stdio.h>
#include <string.h>

void sort(char *strings[], int n) {
    char *temp;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(strings[i], strings[j]) > 0) {
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }
}

int main() {

    int n = 12;
    char **p;
    char *month[] = {
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };

    p = month;
    sort(p, n);
    printf("the months after sort : \n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", month[i]);
    }
}
