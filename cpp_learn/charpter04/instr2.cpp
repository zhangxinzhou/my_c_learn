#include <iostream>

int main()
{

    using namespace std;

    const int AirSize = 20;
    char name[AirSize];
    char desset[AirSize];

    cout << "Enter your name:\n";
    cin.getline(name, AirSize);
    cout << "Enter you favourite dessert:\n";
    cin.getline(desset, AirSize);

    cout << "i have some deliciours " << desset;
    cout << " for you, " << name << ".\n";

    system("pause");
    return 0;
}