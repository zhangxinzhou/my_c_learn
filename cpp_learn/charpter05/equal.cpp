#include <iostream>

int main()
{
    using namespace std;
    int quizscores[10] = {2, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    cout << "Doing it right:\n";
    for (int i = 0; quizscores[i] == 20; i++)
    {
        cout << "quiz " << i << " is a 20\n";
    }
    cout << "Doing it dangerously wrong:\n";
    // 危险操作
    // for (int i = 0; quizscores[i] = 20; i++)
    // {
    //     cout << "quiz " << i << " is a 20\n";
    // }

    system("pause");
    return 0;
}