//
// Created by Administrator on 2021/2/25.
//

#include <stdio.h>

int main() {

    int high = 80;
    int i;
    for (i = 0; i < 6; i++) {
        high /= 2;
        printf("the height of the current is %d\n", high);
    }
    printf("the height of the sixth is %d\n", high);

    return 0;
}
