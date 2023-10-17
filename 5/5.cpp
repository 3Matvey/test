#include <iostream>
#include <iomanip>
int main() {
    long double a1, a100, d, sum;
    std::cin >> a1 >> a100;
    d = (a100 - a1) / 99;
    sum = (2 * a1 + 69 * d) / 2 * 70;
    std::cout << std::setprecision(10);
    std::cout << d << '\n' << sum;

    return 0;
}