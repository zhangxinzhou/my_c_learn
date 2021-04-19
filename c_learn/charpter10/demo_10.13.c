//
// Created by Administrator on 2021/3/17.
//

#include <stdio.h>

int main() {

    char **p;
    char *element[] = {
            "1",
            "2",
            "3",
            "4",
            "5"
    };

    for (int i = 0; i < 5; ++i) {
        p = element + i;
        printf("%s\n", *p);
    }

    int x[1] = {10};
    printf("%d %d %d", x, *x, &x);

    return 0;

}
