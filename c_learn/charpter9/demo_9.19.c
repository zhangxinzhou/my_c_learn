//
// Created by Administrator on 2021/3/11.
//

#include <stdio.h>

int iGlobalPrice = 10;

void Store1Price();

void Store2Price();

void Store3Price();

void ChangePrice();


int main() {
    printf("the price is : %d\n", iGlobalPrice);
    Store1Price();
    Store2Price();
    Store3Price();

    ChangePrice();
    printf("the price is : %d\n", iGlobalPrice);
    Store1Price();
    Store2Price();
    Store3Price();

    return 0;
}

void Store1Price() {
    printf("the store1 price is : %d\n", iGlobalPrice);
}

void Store2Price() {
    printf("the store1 price is : %d\n", iGlobalPrice);
}

void Store3Price() {
    printf("the store1 price is : %d\n", iGlobalPrice);
}

void ChangePrice() {
    printf("after do something,the price is");
    scanf("%d", &iGlobalPrice);
}