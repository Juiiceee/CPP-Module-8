# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <iterator>
#include "easyfind.hpp"

int main()
{
	std::vector<int> hello;

	for(int i = 0; i < 1000; i++)
		hello.push_back(i);

	std::vector<int>::const_iterator it = easyfind(hello, 580);

		if (it != hello.end())
		std::cout << "Value 580 found at position: " << it - hello.begin() << std::endl;
	else
		std::cout << "Value 580 not found " << hello.end() - hello.begin() << std::endl;
}