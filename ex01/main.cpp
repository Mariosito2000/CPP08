#include "Span.hpp"
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	Span mySpan(4);
	mySpan.addNumber(2);
	mySpan.addNumber(-13323);
	mySpan.addNumber(1123);
	mySpan.addNumber(2213);
	std::cout << "Try excess\n\n";
	try
	{
		mySpan.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLongest span = " << mySpan.longestSpan() << "\n";
	std::cout << "\nShortest span = " << mySpan.shortestSpan() << "\n\n";

	std::cout << "Big Span\n";
	Span BigSpan(100);
	std::vector<int> add;
	add.push_back(1);
	add.push_back(2);
	add.push_back(23231);
	add.push_back(-123123);
	add.push_back(123);
	add.push_back(9456);
	add.push_back(8);
	add.push_back(0);
	add.push_back(-55555);
	add.push_back(-9);
	std::vector<int>::iterator begin = add.begin();
	std::vector<int>::iterator end = add.end();
	for (int i = 0; i < 10; i++)
	{
		BigSpan.addManyNumbers(begin, end);
	}
	std::cout << "\nTry excess\n\n";
	try
	{
		BigSpan.addManyNumbers(begin, end);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\nLongest span = " << BigSpan.longestSpan() << "\n";
	std::cout << "\nShortest span = " << BigSpan.shortestSpan() << "\n\n";
}