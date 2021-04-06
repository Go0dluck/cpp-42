#include "span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &cpy)
{
}

Span &Span::operator=(const Span &oper)
{
	if (this == &oper)
		return (*this);
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_vcr.size() >= _n)
		throw SpanMaxSize();
	_vcr.push_back(num);
}

int	Span::shortestSpan() const
{
	return (0);
}

int	Span::longestSpan() const
{
	if (_vcr.size() == 1 || _vcr.empty() == true)
		throw SpanEmptySize();
	std::cout << static_cast<int>(std::max_element(_vcr.begin(), _vcr.end())) << std::endl;
	return (0);
}

Span::~Span()
{
}

const char* Span::SpanMaxSize::what() const throw()
{
	return ("Exception - Vector Max Size");
}

const char* Span::SpanEmptySize::what() const throw()
{
	return ("Exception - Vector empty or one element");
}
