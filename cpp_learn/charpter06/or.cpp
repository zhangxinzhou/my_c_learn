#include <iostream>

int main()
{

    using namespace std;

    cout << "This program may reformat your hard disk\n"
         << "and destory all your data.\n"
         << "Do you wish to continues?<y/n> ";

    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
    {
        cout << "You wrere warned!\a\a\a";
    }
    else if (ch == 'n' || ch == 'N')
    {
        cout << "A wise choice ... bye\n";
    }
    else
    {
        cout << "That wasn't a y or n! Apparently you can't follow\n"
             << "instructions, so I'll trash your disk anyway.\a\a\a\n";
    }

    system("pause");
    return 0;
}