//
// Created by Administrator on 2021/3/25.
//

#include <stdio.h>

struct car {
    char cName[20];
    int iNumber;
} car[5] = {
        {"baoma",   491000},
        {"dazhong", 800000},
        {"luhu",    1150000},
        {"wuling",  50000},
        {"yiqi",    107800}
};

int main() {

    for (int i = 0; i < 5; ++i) {
        printf("NO%d car:\n", i + 1);
        printf("name is : %s,the price is : %d yuan\n", car[i].cName, car[i].iNumber);
        printf("\n");
    }

    return 0;
}
