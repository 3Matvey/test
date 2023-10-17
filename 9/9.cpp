#include <iostream>

int main()
{
	unsigned long long num1, num2;
	std::cout << "enter number 1: ";
	std::cin >> num1;
	std::cout << "enter number 2: ";
	std::cin >> num2;
	
	std::cout << "current number 1: " << num1 << std::endl;
	std::cout << "current number 2: " << num2 << std::endl;
	std::cout << "step 1:" << std::endl;

	num1 = num1 + num2;

	
	std::cout << "current number 1: " << num1 << std::endl;
	std::cout << "current number 2: " << num2 << std::endl;
	std::cout << "step 2:" << std::endl;

	num2 = num1 - num2;

	std::cout << "current number 1: " << num1 << std::endl;
	std::cout << "current number 2: " << num2 << std::endl;
	std::cout << "result:" << std::endl;

	num1 = num1 - num2;

	std::cout << "current number 1: " << num1 << std::endl;
	std::cout << "current number 2: " << num2 << std::endl;

	return 0;
}
