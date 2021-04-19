//
// Created by Administrator on 2021/3/4.
//

#include <stdio.h>

int getTemperature();

int main() {
    getTemperature();
    return 0;
}

int getTemperature() {
    int temperature;
    printf("please input a temperature:\n");
    scanf("%d", &temperature);
    printf("the temperature is : %d\n", temperature);
    return temperature;
}