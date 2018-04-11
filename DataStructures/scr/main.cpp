#include <iostream>
#include "Array.h"
#include <array>

int main()
{
	jc::Array<int, 10> a;
	std::array<int, 4> b{1, 2, 3, 4};

	for (size_t i{ 0 }; i < a.length(); i++)
		a[i] = i;

	for (auto& _a : a)
		std::cout << _a << std::endl;

	std::cin.get();
	return 0;
}