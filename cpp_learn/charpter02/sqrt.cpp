#include <iostream>
#include <cmath>

int main()
{

    using namespace std;

    double area;
    cout << "Enter the floor area, in square feet, of you home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of of square ["
         << side
         << "] feet to the side."
         << endl;
    cout << "How fascinating!" << endl;
    system("pause");
    return 0;
}