//
// Created by Administrator on 2021/3/11.
//

#include <stdio.h>
#include <math.h>

int main() {

    double fResultSin;
    double fResultCos;
    double fResultTan;

    double fXsin = 0.5;
    double fXcos = 0.5;
    double fXtan = 0.5;

    fResultSin = sin(fXsin);
    fResultCos = cos(fXcos);
    fResultTan = tan(fXtan);

    printf("the sin of %1f is %1f\n", fXsin, fResultSin);
    printf("the cos of %1f is %1f\n", fXcos, fResultCos);
    printf("the tan of %1f is %1f\n", fXtan, fResultTan);

    return 0;
}
