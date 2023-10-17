//Вариант 1
#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	double x, D, A, b;
	long double S;
	std::cout << "enter x D: ";
	std::cin >> x >> D;
	b = x + D;
	A = D * x / b;
	S = (A * A + b * cos(x)) / (D * D * D + (A + D - b));
	std::cout << std::setprecision(10) << S;
	return 0;


}
