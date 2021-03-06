#ifndef span_hpp
#define span_hpp

#include <vector>

class Span{
private:
	unsigned int N;
	std::vector<int> vec;

	Span();
public:
	Span(unsigned int);
	Span(const Span &);
	virtual ~Span();

	Span &operator=(const Span &);

	void addNumber(int value);
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	unsigned int shortestSpan();
	unsigned long long int longestSpan();

	void print_element();
};

#endif