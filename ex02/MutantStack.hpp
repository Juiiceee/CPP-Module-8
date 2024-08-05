#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <string>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		MutantStack() : std::stack<T, Container>()
		{
			std::cout << "MutantStack default constructor called\n";
		};
		MutantStack(MutantStack<T, Container> const &obj) : std::stack<T, Container>(obj)
		{
			std::cout << "Copy constructor called\n";
		};
		~MutantStack()
		{
			std::cout << "Destructor of MutantStack called\n";
		};

		MutantStack<T> &operator=(MutantStack<T, Container> const &obj)
		{
			std::cout << "Copy assignment operator called\n";
			if (this != &obj)
				std::stack<T, Container>::operator=(obj);
			return (*this);
		}
		
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		
		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

		const_iterator begin() const {
			return this->c.begin();
		}

		const_iterator end() const {
			return this->c.end();
		}
};

#endif
