//
// Created by Administrator on 2021/2/26.
//

#include <stdio.h>

int main() {


    for (int iCount = 0; iCount < 10; iCount++) {
        if (iCount == 5) {
            printf("feed the children to drink water\n");
            continue;
        }
        printf("%d\n", iCount);
    }
    return 0;
}