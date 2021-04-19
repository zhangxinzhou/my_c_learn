//
// Created by Administrator on 2021/3/17.
//

#include <stdio.h>

int main() {

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

    for (int i = 0; i < 12; ++i) {
        printf("%s\n", month[i]);
    }
}
