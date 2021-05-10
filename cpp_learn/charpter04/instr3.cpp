#include <iostream>

int main()
{

    using namespace std;

    const int AirSize = 20;
    char name[AirSize];
    char desset[AirSize];

    cout << "Enter your name:\n";
    cin.get(name, AirSize).get();
    cout << "Enter you favourite dessert:\n";
    cin.get(desset, AirSize).get();

    cout << "i have some deliciours " << desset;
    cout << " for you, " << name << ".\n";

    system("pause");
    return 0;
}