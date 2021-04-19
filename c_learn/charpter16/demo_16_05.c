//
// Created by Administrator on 2021/4/13.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *fDouble;
    char *iInt;
    fDouble = (int *) malloc(sizeof(int));
    printf("%d\n", sizeof(*fDouble));
    iInt = realloc(fDouble, sizeof(char));
    printf("%d\n", sizeof(*iInt));
    return 0;
}
