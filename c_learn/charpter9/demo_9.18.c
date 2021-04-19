//
// Created by Administrator on 2021/3/10.
//

#include <stdio.h>

int main() {

    int iNumber1 = 1;
    printf("%d\n", iNumber1);

    if (iNumber1 > 0) {
        int iNumber1 = 2;
        printf("%d\n", iNumber1);

        if (iNumber1 > 0) {
            int iNumber1 = 3;
            printf("%d\n", iNumber1);
        }
        printf("%d\n", iNumber1);
    }
    printf("%d\n", iNumber1);
    return 0;

}
