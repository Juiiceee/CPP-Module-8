#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
#include <iterator>

template<typename T>
typename T::const_iterator easyfind(const T &t, int nbr)
{
	return (find(t.begin(), t.end(), nbr));
}

#endif