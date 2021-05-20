#include <iostream>

struct inflatble
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatble bouquet = {
        "sunfloweers",
        0.20,
        14.49};
    inflatble choise;

    cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;

    choise = bouquet;
    cout << "choice: " << choise.name << " for $" << choise.price << endl;

    system("pause");
    return 0;
}