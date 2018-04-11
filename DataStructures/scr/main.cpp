#include <iostream>
#include "Array.h"
#include <array>

void print(const jc::Array<int, 4>& b)
{
	for (auto& _b : b)
		std::cout << _b << std::endl;
}

int main()
{
	jc::Array<int, 4> a{1, 2, 3, 4};
	jc::Array<int, 0> b;

	std::cout << a.empty() << std::endl;
	std::cout << b.empty() << std::endl;

	print(a);

	std::cin.get();
	return 0;
}