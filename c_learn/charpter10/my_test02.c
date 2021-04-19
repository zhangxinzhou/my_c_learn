//
// Created by Administrator on 2021/3/13.
//

#include <stdio.h>

int main() {

    int i = 1;
    int p = &i;
    printf("i=%d,p=%d,*p=%d", i, p, &p);


    int k;
    printf("\nplease input : \n");
    scanf("%c", &k);
    printf("%d", k);

    return 0;
}
