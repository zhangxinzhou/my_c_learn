#include <iostream>
int main()
{
    using namespace std;
    char ch;
    int count = 0;
    while (cin.fail() == false)
    {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl
         << count << " characters read\n";

    system("pause");
    return 0;
}