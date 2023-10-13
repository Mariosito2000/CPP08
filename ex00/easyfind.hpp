#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <exception>
#include <iterator>
#include <algorithm>

class NotFoundException : public std::exception {
	public:
		const char * what () const _NOEXCEPT {
			return ("Value not found");
    	}
};

template < typename T >
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw(NotFoundException());
	return (it);
}

#endif