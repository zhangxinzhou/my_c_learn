#include <iostream>

int main()
{

    using namespace std;

    const int AirSize = 20;
    char name[AirSize];
    char desset[AirSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter you favourite dessert:\n";
    cin >> desset;

    cout << "i have some deliciours " << desset;
    cout << " for you, " << name << ".\n";

    system("pause");
    return 0;
}