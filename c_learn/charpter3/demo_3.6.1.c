//
// Created by Administrator on 2021/2/19.
//

#include <stdio.h>

void park() {
    static int count = 30;
    count = count - 1;
    printf("the  remaining number of parking spaces:%d\n", count);
}

void main() {
    park();
    park();
    park();
    park();
}

