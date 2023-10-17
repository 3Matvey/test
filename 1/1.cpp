#include <iostream>

int main()
{
    double x;
    std::cout << "enter x:";
    std::cin >> x;
    double a = x * x;
    double b = x * (23 * a + 32);
    double c = 69 * a + 8;
    std::cout << b + c << std::endl;
    std::cout << c - b;
    return 0;
}

