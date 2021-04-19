//
// Created by Administrator on 2021/2/20.
//

#include <stdio.h>

int main() {

    int iHoursWorded = 8;
    int iHourlyRate;
    int iGrossPay;

    iHourlyRate = 13;
    iGrossPay = iHoursWorded * iHourlyRate;

    printf("the hoursWorded is : %d\n", iHoursWorded);
    printf("the hourlyRate is : %d\n", iHourlyRate);
    printf("the grossPay is : %d\n", iGrossPay);

    return 0;
}