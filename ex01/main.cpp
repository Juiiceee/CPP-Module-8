#include <iostream>
#include <set>
# include <cstdlib>
# include <ctime>
# include "Span.hpp"

int main()
{
	Span oui(50);
	std::srand(time(0));
	for (int i = 0; i < 50; i++)
	{
		try
		{
			oui.addNumber(rand());
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
	}

	std::cout << oui.longestSpan() << std::endl;
	std::cout << oui.shortestSpan() << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span salut(1);
	salut.addNumber(15);
	try
	{
		salut.shortestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	try
	{
		salut.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}