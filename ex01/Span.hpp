#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <set>

class Span
{
	private:
		unsigned int _size;
		unsigned int _compt;
		std::multiset<int> _set;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();

		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void print();
		class OutOfRange : public std::exception
		{
			const char *what() const throw()
			{
				return ("Out Of Range\n");
			}
		};

		class NotEnough : public std::exception
		{
			const char *what() const throw()
			{
				return ("Not Enough Size\n");
			}
		};
};
#endif
