#include <iostream>
#include <ctime>

int main()
{
    using namespace std;
    cout << "Enter the delay time, in secondes: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    cout << "CLOCKS_PER_SEC = " << CLOCKS_PER_SEC << endl;
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay)
    {
        // do nothing
    }
    cout << "done \a\n";

    system("pause");
    return 0;
}