//
// Created by Administrator on 2021/4/5.
//

#include <stdio.h>

#define TEM 37

int main() {

#if TEM > 37
    printf("high\n");
#elif TEM < 37
    printf("low\n");
#else
    printf("normal\n");
#endif
    printf("the tem is %d\n", TEM);
    return 0;
}