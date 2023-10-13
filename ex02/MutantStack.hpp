#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <deque>

template <typename T>
class MutantStack: public stack<T>
{
public:

/*---CONS/DES---*/

	MutantStack();
	~MutantStack();

	MutantStack(const MutantStack &);

/*---MEMBER FUNCTIONS---*/

	iterator a;
	MutantStack<T>::iterator begin();

/*---OPERATORS---*/

	MutantStack &	operator = (const MutantStack &);

};

#endif