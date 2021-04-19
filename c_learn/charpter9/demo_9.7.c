//
// Created by Administrator on 2021/3/7.
//

#include <stdio.h>

void allitrim(char *str) {

    char *p = str;
    printf("str size = %d \n", sizeof(str));
    while (*p != 0) {
        printf("%-20s %-20d %-20d %-20d %-20d\n", str, &str, p, *p, &p);
        if (*p == ' ') {
            char *q = p;
            while (*q != 0) {
                *q = *(q + 1);
                q++;
            }
        } else {
            p++;
        }
    }

}

int main() {

    char orig[80];
    printf("input string:");
    while (gets(orig) && orig[0] != '\0') {
        allitrim(orig);
        printf("output string: ");
        puts(orig);
    }
    puts("bye!");
    return 0;
}
