#include <stdio.h>
int count = 0;
int value;
void func(int sum)
{
    printf("sum is :%d\n", sum);
    system("pause");
}

int main()
{
    static int a = 1;
    static int b = 0;
    int x = 1;
    func(a + b + x);
    return 0;
}