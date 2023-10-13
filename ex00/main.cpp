#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main()
{

	std::cout << "Vector\n";
	std::vector<int> vector;

	vector.push_back(1);
	vector.push_back(92);
	vector.push_back(3);
	vector.push_back(14);
	vector.push_back(6);
	vector.push_back(5);
	vector.push_back(9);
	vector.push_back(02);
	vector.push_back(9);

	try
	{
		std::vector<int>::iterator iter = easyfind(vector, 2431234);
		std::cout << *iter << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

std::cout << "\nList\n";

	std::list<int> list;

	list.push_back(1);
	list.push_back(4);
	list.push_back(6);
	list.push_back(2);
	list.push_back(15);
	list.push_back(12315);
	list.push_back(234441);
	list.push_back(551);
	list.push_back(-11);

	try
	{
		std::list<int>::iterator iter = easyfind(list, 12331);
		std::cout << *iter << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}