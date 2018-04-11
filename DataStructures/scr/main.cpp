#include <iostream>
#include "classes\containers\Array.h"
#include "classes\containers\Vector.h"
#include <vector>

int main()
{
	jc::Array<int, 4> a{1, 2, 3, 4};
	jc::Vector<double> v(3);
	
	for (size_t i = 0; i < v.size(); i++)
		v[i] = (i + 2.5);

	jc::Vector<char> u;
	std::cout << v.empty() << std::endl;
	u.assign(6, 'a');

	for (const auto& _u : u)
		std::cout << _u << "\t";

	std::cin.get();
	return 0;
}