#include <stdio.h>

long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}

long long plus(long long a)
{
    long long result = a;
    return result;
}

long scale(long x, long y, long z)
{
    long t = x + 4 * y + 12 * z;
    return t;
}

long arith(long x, long y, long z)
{
    long t1 = x ^ y;
    long t2 = z * 48;
    long t3 = t1 & 0x0F0F0F0F;
    long t4 = t2 - t3;
    return t4;
}

int comp(char a, char b)
{
    return (a < b);
}

long absdiff_se(long x, long y)
{
    long result;
    if (x < y)
    {
        result = y - x;
    }
    else
    {
        result = x - y;
    }
    return result;
}

long comvdiff_se(long x, long y)
{
    long rval = y - x;
    long eval = x - y;
    long ntest = x >= y;
    if (ntest)
        rval = eval;
    return rval;
}

void proc(long a1, long *a1p, int a2, long *a2p, short a3, long *a3p, char a4, long *a4p)
{
    a1p += a1;
    a2p += a2;
    a3p += a3;
    a4p += a4;
}

long swap(long *xp, long *yp)
{
    long x = *xp;
    long y = *yp;
    *xp = y;
    *yp = x;
    return x + y;
}

long caller()
{
    long arg1 = 534;
    long arg2 = 1057;
    long sum = swap(&arg1, &arg2);
    long diff = arg1 - arg2;
    return sum * diff;
}

int main(int argc, char const *argv[])
{
    long a = 4;
    long b = exchange(&a, 3);
    printf("a = %ld, b = %ld\n", a, b);
    return 0;
}
