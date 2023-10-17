#include <iostream>

int main()
{
	int h1, min1, h2, min2, t, h, min;
	
	std::cout << "enter h1 min1: ";
	std::cin >> h1 >> min1;
	std::cout << "enter h2 min2: ";
	std::cin >> h2 >> min2;
	t = h2 * 60 + min2 - h1 * 60 - min1;
	h = t / 60;
	min = t % 60;
	std::cout << "time = " << h << "h " << min << "min";
	return 0;
}