//
// Created by Administrator on 2021/2/28.
//

#include <stdio.h>

int main() {
    char cDiamond[][5] = {
            {' ', ' ', '*'},
            {' ', '*', ' ', '*'},
            {'*', ' ', ' ', ' ', '*'},
            {' ', '*', ' ', '*'},
            {' ', ' ', '*'}
    };
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%c", cDiamond[i][j]);
        }
        printf("\n");
    }
    return 0;
}