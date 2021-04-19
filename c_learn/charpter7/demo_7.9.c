//
// Created by Administrator on 2021/2/26.
//

#include <stdio.h>

int main() {


    for (int iCount = 0; iCount < 10; iCount++) {
        if (iCount == 5) {
            printf("find a true friend\n");
            break;
        }
        printf("friend %d\n", iCount);
    }
    return 0;
}
