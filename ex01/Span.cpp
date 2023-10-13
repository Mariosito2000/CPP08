#include "Span.hpp"

#include <algorithm>
#include <cmath>
#include <iostream>

/*---CONS/DES---*/

Span::Span()
{
	_N = 10;
}

Span::~Span()
{

}

Span::Span(const Span &other)
{
	_N = other._N;
	_vector = other._vector;
}

Span::Span(unsigned int N)
{
	_N = N;
}

/*---MEMBER FUNCTIONS---*/

void Span::addNumber(int num)
{
	if (_vector.size() == _N)
		throw (OutOfCapacityException());
	_vector.push_back(num);
}

int	Span::shortestSpan()
{
	if (_vector.size() <= 1)
		throw (NoPossibleSpanException());
	int	span = -1;
	sort(_vector.begin(), _vector.end());
	std::vector<int>::iterator it;
	std::vector<int>::iterator itnext;
	for (it = _vector.begin(); it != _vector.end(); ++it)
	{
		if (span == -1 || span > std::abs((*it - *(it + 1))))
			span = std::abs(*it - *(it + 1));
	}
	return (span);
}

int	Span::longestSpan()
{
	if (_vector.size() <= 1)
		throw (NoPossibleSpanException());
	return  (static_cast<int>((*max_element(_vector.begin(), _vector.end())) - (*min_element(_vector.begin(), _vector.end()))));
}

void Span::addManyNumbers(std::vector<int>::iterator &addbegin, std::vector<int>::iterator &addend)
{
	if ((std::distance(addbegin, addend) + _vector.size()) > _N)
		throw (OutOfCapacityException());
	_vector.insert(_vector.end(), addbegin, addend);
}

/*---OPERATORS---*/

Span & Span::operator = (Span &other)
{
	_N = other._N;
	_vector = other._vector;
	return (*this);
}

/*---EXCEPTIONS---*/

const char * Span::OutOfCapacityException::what () const _NOEXCEPT
{
	return ("Maximum capacity has been exceeded");
}

const char * Span::NoPossibleSpanException::what () const _NOEXCEPT
{
	return ("Can't get a span from less than 2 numbers");
}