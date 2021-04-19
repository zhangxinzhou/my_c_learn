//
// Created by Administrator on 2021/3/13.
//

#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void swap2(int a, int b) {
    int t = a;
    a = b;
    b = t;
}

int main() {

    int x = 1, y = 9;
    swap(&x, &y);
    printf("x=%d,y=%d\n", x, y);

    x = 1, y = 9;
    swap2(x, y);
    printf("x=%d,y=%d\n", x, y);
    return 0;

}
