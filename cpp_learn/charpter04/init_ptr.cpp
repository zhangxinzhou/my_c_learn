#include <iostream>
int main()
{

    using namespace std;
    int higgens = 5;
    int *pt = &higgens;

    cout << "Value of higgens = " << higgens << "; address of higgens = " << &higgens << endl;
    cout << "value of *pt = " << *pt << "; Value of pt = " << pt << endl;
    cout << "pt size = " << sizeof pt << endl;

    system("pause");
    return 0;
}