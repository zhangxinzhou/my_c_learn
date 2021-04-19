//
// Created by Administrator on 2021/3/8.
//

#include <stdio.h>

void TwoNum(float iNum1, float iNum2);

int main() {
    TwoNum(5, 10);
    return 0;
}

void TwoNum(float iNum1, float iNum2) {
    float iTempResult;
    iTempResult = iNum1 / iNum2;
    printf("R=%f\n", iTempResult);
}
