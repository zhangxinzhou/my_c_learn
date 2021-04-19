//
// Created by Administrator on 2021/2/24.
//

#include <stdio.h>

int main() {

    int jour, fee;
    printf("the mileage is taxi go:\n");
    scanf("%d", &jour);
    fee = (jour < 3) ? 6 : 6 + (jour - 3) * 2;
    printf("the costs of get a taxi is %d\n", fee);
    return 0;
}
