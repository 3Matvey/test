#include <iostream>
#include <iomanip>

int main() {
    double b1;
    long double sum;
    double q;
    q = 1 / (1+ 1);
        q = static_cast<double>(1) / (1 + 1);
   
    std::cin >> b1;
    sum = b1 / (1 - q);
    std::cout << std::setprecision(8) << sum;

    return 0;
}