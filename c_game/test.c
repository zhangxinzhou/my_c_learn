#include <stdio.h>

int main()
{

    int a = 10;
    while (1)
    {
        a++;
        printf("a=%d,address=%X\n", a, &a);
        system("pause");
    }

    return 0;
}