#include <iostream>
#include <iomanip>

int main()
{
    double g = 9.8;
    double h, t;
    std::cin >> h;
    t = sqrt(2 * h / g);
    std::cout << std::setprecision(9) << t;
    return 0;
}