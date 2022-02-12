// fun_ptr.cpp -- pointers to functions
#include <iostream>
double betsy(int);
double pam(int);

// second  argument is pointer to a type double function that
// takes a type int argument
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;
    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, betsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code, pam);

    cout << "betsy = " << betsy << endl;
    cout << "&betsy = " << &betsy << endl;
    cout << "*betsy = " << *betsy << endl;
    cout << "pan = " << pam << endl;
    cout << "&pan = " << &pam << endl;
    cout << "*pan = " << *pam << endl;
    auto tmp_a = betsy;
    cout << "tmp_a = " << tmp_a << endl;
    cout << "&tmp_a = " << &tmp_a << endl;
    cout << "*tmp_a = " << *tmp_a << endl;
    auto tmp_b = pam;
    cout << "tmp_b = " << tmp_b << endl;
    cout << "&tmp_b = " << &tmp_b << endl;
    cout << "*tmp_b = " << *tmp_b << endl;

    system("pause");
    return 0;
}

double betsy(int lns)
{
    return 0.05 * lns;
}

double pam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hours(s)\n";
    cout << "pf = " << pf << endl;
    cout << "&pf = " << &pf << endl;
    cout << "*pf = " << *pf << endl;
}