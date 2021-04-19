//
// Created by Administrator on 2021/4/13.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *pInt;
    //printf("on define pInt = %d,address = %d\n", *pInt, &pInt);
    pInt = (char *) malloc(sizeof(char));
    printf("on define pInt = %d,address = %d\n", *pInt, &pInt);
    *pInt = 65;
    printf("on define pInt = %d,address = %d\n", *pInt, &pInt);
    printf("the graph is : %c\n", *pInt);
    free(pInt);
    printf("on define pInt = %d,address = %d\n", *pInt, &pInt);
    return 0;
}