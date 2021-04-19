//
// Created by Administrator on 2021/3/24.
//

#include <stdio.h>
#include <string.h>

struct Car {
    char name[64];
    char color[20];
    float length;
    int seniority;
};

int main() {

    struct Car a_car;
    strcpy(a_car.name, "路虎");
    strcpy(a_car.color, "黑色");
    a_car.length = 4.85f;
    a_car.seniority = 5;
    printf("car's number is %s\n", a_car.name);
    printf("car's color is %s\n", a_car.color);
    printf("car's length is %d\n", a_car.length);
    printf("car's seniority is %d\n", a_car.seniority);
    return 0;
}