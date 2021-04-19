//
// Created by Administrator on 2021/4/13.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *ch;
    ch = (char *) calloc(30, sizeof(char));
    printf("%d\n", sizeof(*ch));
    strcpy(ch, "Mingrisoft");
    printf("%s\n", ch);
    free(ch);
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(*ch));
    return 0;
}
