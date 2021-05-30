#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite numebr\n";
    do
    {
        cin >> n;
    } while (n != 7);
    cout << "Yes,7 is my favorite.\n";

    system("pause");
    return 0;
}