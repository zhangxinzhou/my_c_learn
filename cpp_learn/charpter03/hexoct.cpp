#include <iostream>

int main()
{

    using namespace std;
    int chest = 42;   //十进制
    int waist = 0x42; // 16进制
    int inseam = 042; //8进制

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << "(42 in decimal)\n";
    cout << "waist = " << waist << "(0x42 in hex)\n";
    cout << "inseam = " << inseam << "(042 in otcal)\n";
    
    system("pause");
    return 0;
}