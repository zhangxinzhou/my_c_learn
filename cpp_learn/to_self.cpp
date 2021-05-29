#include <iostream>
using namespace std;

int main()
{
    int *p = new int;
    int a = 10;
    p = &a;

    cout << "p = " << p << ", *p = " << *p << ", &p = " << &p << endl;

    system("pause");
    return 0;
}