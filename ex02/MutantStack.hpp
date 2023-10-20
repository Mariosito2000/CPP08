#pragma once
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>
#include <stack>
#include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
public:

/*---CONS/DES---*/

	MutantStack() {};
	~MutantStack() {};

	MutantStack(const MutantStack &other) { (void)other; };

/*---MEMBER FUNCTIONS---*/

	typedef typename std::deque<T>::iterator iterator;
	typedef typename std::deque<T>::reverse_iterator reverse_iterator;
	typedef typename std::deque<T>::const_iterator const_iterator;
	typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

	using	std::stack<T>::c;

	iterator begin() { return (this->c.begin()); }
	iterator end() { return (this->c.end()); }
	reverse_iterator rbegin() { return (this->c.rbegin()); }
	reverse_iterator rend() { return (this->c.rend()); }
	const_iterator cbegin() { return (this->c.cbegin()); }
	const_iterator cend() { return (this->c.cend()); }
	const_reverse_iterator crbegin() { return (this->c.crbegin()); }
	const_reverse_iterator crend() { return (this->c.crend()); }

/*---OPERATORS---*/

	MutantStack<T> &	operator = (const MutantStack<T> &);

};

#endif