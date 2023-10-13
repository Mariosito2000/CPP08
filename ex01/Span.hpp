#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <exception>
#include <iterator>

class Span
{
private:

	std::vector<int> _vector;
	unsigned int	_N;

public:

/*---CONS/DES---*/

	Span();
	~Span();

	Span(const Span & other);
	Span(unsigned int size);

/*---MEMBER FUNCTIONS---*/

	void 	addNumber(int);
	int		shortestSpan();
	int		longestSpan();
	void 	addManyNumbers(std::vector<int>::iterator & begin, std::vector<int>::iterator & end);

/*---OPERATORS---*/

	Span & operator = (Span &);

/*---EXCEPTIONS---*/

	class OutOfCapacityException: public std::exception{
		public:
			const char * what () const _NOEXCEPT;
	};

	class NoPossibleSpanException: public std::exception{
		public:
			const char * what () const _NOEXCEPT;
	};

};

#endif