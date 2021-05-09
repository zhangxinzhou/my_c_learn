#include <iostream>
#define ZERO 0
#include <climits>

int main()
{

    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << endl
         << " Add $1 to each account."
         << "Now " << endl;
    sam = sam + 1;
    sue = sue + 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited.\n Poor sam!" << endl;
    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl
         << "Now ";

    sam = sam - 1;
    sue = sue - 1;
    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl
         << "Lucky Sue!" << endl;

    system("pause");
    return 0;
}