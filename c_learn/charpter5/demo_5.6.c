//
// Created by Administrator on 2021/2/22.
//

#include <stdio.h>

int main() {

    long iLong = 10000;
    printf("the long is %ld\n", iLong);
    printf("the string is:%sKeJi\n", "MingRi");
    printf("the string is%10sKeJi\n", "MingRi");
    printf("the string is%-10sKeJi\n", "MingRi");
    printf("the string is%10.3sKeJi\n", "MingRi");
    printf("the string is%-10.3sKeJi\n", "MingRi");

    printf("%10s\n", "*");
    printf("s %8s %10s\n", "*", "*", "*");
    printf("%10s\n", "*");
    return 0;
}
