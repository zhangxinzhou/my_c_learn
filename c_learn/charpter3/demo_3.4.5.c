//
// Created by Administrator on 2021/2/18.
//

#include <stdio.h>

#define  PAI 3.14

int main() {
    double fRadius;
    double fResult = 0;
    printf("������Բ�İ뾶:");

    scanf("%lf", &fRadius);

    fResult = fRadius * fRadius * PAI;
    printf("����İ뾶Ϊ: %lf\n", fRadius);
    printf("Բ�����Ϊ: %lf\n", fResult);

    return 0;
}
