//
// Created by Administrator on 2021/3/8.
//

#include <stdio.h>

void judgeTemperature(int temperature);

int getTemperature();

int main() {

    judgeTemperature(getTemperature());
    return 0;
}

int getTemperature() {
    int temperature;
    printf("please input a temperature:\n");
    scanf("%d", &temperature);
    printf("current temperature:%d\n", temperature);
    return temperature;
}

void judgeTemperature(int temperature) {

    if (temperature <= 37.3f && temperature >= 36) {
        printf("temperature is ok");
    } else {
        printf("temperature is not ok");
    }

}
