//
// Created by Administrator on 2021/2/22.
//

#include <stdio.h>

int main() {

    float Pie = 3.14f;
    float fArea;
    float fRadius;
    puts("Enter the radius:");
    scanf("%f", &fRadius);
    fArea = 2 * fRadius * Pie;
    printf("the perimeter is : %.2f\n", fArea);
    fArea = 4 / 3 * (fRadius * fRadius * fRadius * Pie);
    printf("the volume is : %.2f\n", fArea);
    return 0;
}