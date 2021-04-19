//
// Created by Administrator on 2021/4/4.
//

#include <stdio.h>

#define NUM 50

void main() {

    int i = 0;
#if NUM > 5
    i++;
#endif
#if NUM == 50
    i=i+50;
#endif
#if NUM < 50
    i--;
#endif

    printf("now i is : %d", i);
}
