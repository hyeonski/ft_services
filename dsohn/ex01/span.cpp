#include "span.hpp"
#include <algorithm>
#include <iostream>

Span::Span()
{

}

Span::Span(unsigned int n) : N(n)
{

}

Span::Span(const Span & other) : N(other.N), vec(other.vec)
{

}

Span::~Span()
{

}

Span &Span::operator=(const Span & other)
{
	if (this == &other)
		return *this;
	
	N = other.N;
	vec = other.vec;

	return *this;
}

void Span::addNumber(int value)
{
	if (vec.size() >= N)
        throw std::out_of_range("SpanException : vector is full");
    vec.push_back(value);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
    {
		if (vec.size() >= N)
        	throw std::out_of_range("SpanException : vector is full");
        this->vec.push_back(*begin);
        begin++;
    }
}

unsigned int Span::shortestSpan()
{
	if (vec.size() < 2)
        throw std::out_of_range("SpanException : element need more than 2");
	std::vector<int> temp(vec);
	std::sort(temp.begin(), temp.end());
	int ret = INT_MAX;
	for (unsigned int i = 1;i < temp.size();i++)
		ret = std::min(ret, std::abs(temp[i] - temp[i - 1]));
	return ret;
}

unsigned long long int Span::longestSpan()
{
	if (vec.size() < 2)
        throw std::out_of_range("SpanException : element need more than 2");
	return std::abs((long long)*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
}

void Span::print_element()
{
	for (unsigned int i = 0;i < vec.size();i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}