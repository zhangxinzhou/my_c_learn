#include <iostream>

int main()
{

    int a = 20;
    int b = 20;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a++ = " << a++ << ", ++b = " << ++b << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;

    int c = 0;
    while (c++ < 10)
    {
        std::cout << c << std::endl;
    }

    int x = 0;
    int y = (4 + x++) + (6 + x++);
    std::cout << y << std::endl;

    system("pause");
    return 0;
}