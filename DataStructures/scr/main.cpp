#include <iostream>
#include "classes\containers\Array.h"
#include "classes\containers\Vector.h"
#include <array>
#include <vector>

int main()
{
	jc::Array<int, 4> a{1, 2, 3, 4};
	jc::Vector<double> v(3);
	
	for (size_t i = 0; i < v.size(); i++)
		v[i] = (i + 2.5);

	jc::Vector<double> u(3);
	jc::Vector<double> w(1);

	std::vector<float> f{1};
	std::vector<float> e{1, 0};

	for (const auto& _u : u)
		std::cout << _u << "\t";

	std::cout << "\n" << (f <= e) << std::endl;

	std::cin.get();
	return 0;
}