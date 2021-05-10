#include <iostream>

int main()
{

    char cat[3] = {'c', 'a', 't'};
    char dog[4] = {'d', 'o', 'g', '\0'};

    std::cout << cat << ", address = " << &cat << std::endl;
    std::cout << dog << ", address = " << &dog << std::endl;

    char *p1 = &cat[0];
    for (int i = 0; i < 100; i++)
    {
        std::cout << "val = " << *p1 << ", address = " << p1 << std::endl;
        p1++;
    }

    system("pause");
    return 0;
}