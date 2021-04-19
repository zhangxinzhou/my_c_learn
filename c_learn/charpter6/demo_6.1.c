//
// Created by Administrator on 2021/2/23.
//

#include <stdio.h>

int main() {

    int code;
    puts("please enter code:");
    scanf("%d", &code);
    if (code == 404328) {
        printf("enter the password correctly,can take money\n");
    } else {
        printf("password error");
    }
    return 0;
}
