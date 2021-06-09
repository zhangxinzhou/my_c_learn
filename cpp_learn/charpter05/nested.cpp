#include <iostream>

const int Cities = 5;
const int Years = 4;

int main()
{

    using namespace std;
    const char *cities[Cities] = {"Gribble City", "Gribbetown", "New Gribble", "San Gribble", "Gribble Vista"};
    int maxtemps[Years][Cities] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}};

    cout << "Maximum temperatures for 2008 - 2011\n\n";
    for (int city = 0; city < Cities; ++city)
    {
        cout << cities[city] << ":\t";
        for (int year = 0; year < Years; ++year)
        {
            cout << maxtemps[year][city] << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}