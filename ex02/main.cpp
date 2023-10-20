#include <iostream>
#include <stack>
#include <iterator>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	std::cout << "\nprepop size: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "\npostpop size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	mstack.push(1);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::cout << "\niter test\n\n";
	std::cout << *it << std::endl;
	++it;
	std::cout << *it << std::endl;
	--it;
	std::cout << *it << std::endl;

	std::cout << "\nsize: " << mstack.size() << std::endl;

	std::cout << "\niterate stack\n\n";
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "\niter test\n\n";
	std::cout << *rit << std::endl;
	++rit;
	std::cout << *rit << std::endl;
	--rit;
	std::cout << *rit << std::endl;

	std::cout << "\nsize: " << mstack.size() << std::endl;

	std::cout << "\niterate stack reverse way\n\n";
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::stack<int> s(mstack);
	return 0;
}