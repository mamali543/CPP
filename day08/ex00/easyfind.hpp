#ifndef EASYFING_HPP
#define EASYFING_HPP

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

#define RED "\033[0;31m"
#define DEFAULT "\033[0m"

class NotFound : public std::exception
{
	const char *what() const throw()
	{
		return "\033[0;31mNOT FOUND\033[0m";
	};
};

template <typename T>
void easyfind(T container, int i)
{
	typename T::iterator it;
	 it = std::find(container.begin(), container.end(), i);
	if (it != container.end())
	{
		std::cout << *it << std::endl;
		std::cout << "the first occurance of " << i << " in container is at pos :" 
			<< it - container.begin() << std::endl;
	}
	else
		throw NotFound();
}

#endif