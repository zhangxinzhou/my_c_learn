//
// Created by Administrator on 2021/2/23.
//

#include <stdio.h>

int main() {

    int num;
    puts("the number of meals:");
    scanf("%d", &num);
    if (num <= 8) {
        printf("arrange %d people dining table\n", num);
    } else {
        printf("arrange luxurious private rooms\n");
    }
    return 0;
}
