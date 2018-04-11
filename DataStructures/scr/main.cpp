#include <iostream>
#include "Array.h"
#include <array>

int main()
{
	jc::Array<int, 10> a;
	std::array<int, 4> b{1, 2, 3, 4};

	std::cout << a.front() << std::endl;
	std::cin.get();
	return 0;
}