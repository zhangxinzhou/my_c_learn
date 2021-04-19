//
// Created by Administrator on 2021/4/4.
//

#include <stdio.h>

#define iInput 19054

int main() {

    printf("now is : %d\n", iInput);
#if iInput > 0
    if (iInput % 9527 == 0 && iInput % 2 == 0) {
        printf("can be xxx\n");
    }
#else
#if iInput<0
    printf("now is negetive : %d\n",iInput);
#else
    printf("can not be xxx by 9527 , now is %d\n",iInput);
#endif
#endif
    return 0;
}
