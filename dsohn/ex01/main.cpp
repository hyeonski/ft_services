#include <iostream>
#include "span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(-2147483648);
	sp.addNumber(2147483647);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	try
    {
        sp.addNumber(100);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	Span test(10000);
    std::vector<int> vec;
    
    for (int i = 0; i < 10000; i++)
        vec.push_back(rand() % 100000);
    
    test.addNumber(vec.begin(), vec.end());

    test.print_element();
    std::cout << test.shortestSpan() << std::endl;
    std::cout << test.longestSpan() << std::endl;

	return 0;
}