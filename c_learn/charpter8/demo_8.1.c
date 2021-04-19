//
// Created by Administrator on 2021/2/26.
//

#include <stdio.h>

int main() {


    int iArray[3];
    printf("请输入语文,数学和英语成绩:\n");

    for (int i = 0; i < 3; ++i) {
        scanf("%d", &iArray[i]);
    }

    printf("语文,数学和英语的成绩分别是:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d\t", iArray[i]);
    }
    printf("\n");

    return 0;
}