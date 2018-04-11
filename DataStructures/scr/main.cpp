#include <iostream>
#include "Array.h"
#include <array>

int main()
{
	const jc::Array<int, 4> a{0, 1, 2, 3};

	for (auto& _a : a)
		std::cout << _a << std::endl;

	std::cin.get();
	return 0;
}