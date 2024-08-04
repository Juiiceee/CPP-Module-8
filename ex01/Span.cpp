#include "Span.hpp"

Span::Span()
{
	std::cout << "Span default constructor called\n";
}

Span::Span(unsigned int N) : _size(N), _compt(0)
{
	std::cout << "Span constructor called\n";
}

Span::Span(const Span &obj)
{
	std::cout << "Copy constructor called\n";
	*this = obj;
	return ;
}

Span &Span::operator=(const Span &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &obj)
	{
		
	}
	return *this;
}

void Span::addNumber(int number)
{
	if (this->_compt == this->_size)
		throw OutOfRange();
	this->_set.insert(number);
	_compt++;
}

int Span::shortestSpan()
{
	if (_compt < 2)
		throw NotEnough();
	int dif = *_set.rbegin();
	for (std::multiset<int>::iterator it = _set.begin(); it != --_set.end(); it++)
	{
		std::multiset<int>::iterator after = it;
		if (*(++after) - *it  < dif)
			dif = *after - *it;
	}
	return (dif);
}

void Span::print()
{
	for (std::multiset<int>::iterator it = _set.begin(); it != _set.end(); it++)
		std::cout << *it << std::endl;
}

int Span::longestSpan()
{
	if (_compt < 2)
		throw NotEnough();
	return (*_set.rbegin() - *_set.begin());
}

Span::~Span()
{
	std::cout << "Destructor of Span called\n";
}
