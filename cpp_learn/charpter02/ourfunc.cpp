#include <iostream>

void simon(int);

int main()
{

    using namespace std;
    simon(3);

    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    system("pause");
    return 0;
}

void simon(int n)
{

    using namespace std;
    cout << "Simon says touch you toes " << n << " times." << endl;
}