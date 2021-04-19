//
// Created by Administrator on 2021/2/20.
//

#include <stdio.h>

int main() {

    int iCelsius, iFahrenheit;
    printf("please enter temperature :\n");
    scanf("%d", &iFahrenheit);
    iCelsius = 5 * (iFahrenheit - 32) / 9;

    printf("temperature is : %d degrees Celsius\n", iCelsius);
    return 0;
}
