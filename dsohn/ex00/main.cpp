#include "easyfind.hpp"
#include <iostream>
#include <exception>
#include <vector>
#include <list>

int main()
{
	std::vector<int> vec(5, 5);
	for (int i = 0; i < 5; i++)
		vec[i] = i;
	std::vector<int>::iterator found = easyfind(vec, 4);
	if (found == vec.end())
		std::cout << "cannot find 4 in vector" << std::endl;
	else
		std::cout << "found 4 in vector " << *found << std::endl;
	if (easyfind(vec, 6) == vec.end())
		std::cout << "6 not found in vector" << std::endl;

	std::list<int> ls;
	for (int i = 0; i < 5; i++)
		ls.push_back(i);
	std::list<int>::iterator found1 = easyfind(ls, 4);
	if (found1 == ls.end())
		std::cout << "cannot find 4 in list" << std::endl;
	else
		std::cout << "found 4 in list " << *found1 << std::endl;
	if (easyfind(ls, 6) == ls.end())
		std::cout << "6 not found in list" << std::endl;
}