#include <iostream>
#include <string>

int main()
{
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaquar";
    string str1;
    string str2 = "panther";

    cout << "Enter a kind of feline: ";
    cin >> charr1;
    cout << "Enter another kend of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << charr1 << " " << charr2 << " "
         << str1 << " " << str2
         << endl;

    cout << "The third letter in " << charr2 << " is "
         << charr2[2] << endl;

    cout << "The third letter in " << str2 << " is "
         << str2[2] << endl;

    system("pause");
    return 0;
}