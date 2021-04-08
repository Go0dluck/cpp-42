#include "span.hpp"

Span::Span() : _n(0)
{
}

Span::Span(unsigned int n) : _n(n)
{
}

Span::Span(const Span &cpy) : _n(cpy._n), _vcr(cpy._vcr)
{
}

Span &Span::operator=(const Span &oper)
{
	if (this == &oper)
		return (*this);
	_n = oper._n;
	_vcr = oper._vcr;
	return (*this);
}

void	Span::addNumber(size_t num)
{
	if (_vcr.size() >= _n)
		throw SpanMaxSize();
	_vcr.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator stop)
{
	if (std::distance(start, stop) + _vcr.size() > _n)
		throw SpanMaxSize();
	_vcr.insert(_vcr.end(), start, stop);
}

int	Span::shortestSpan() const
{
	if (_vcr.size() == 1 || _vcr.empty() == true)
		throw SpanEmptySize();
	int min1 = *std::min_element(_vcr.begin(), _vcr.end());
	int min2 = _vcr[0];
	for (size_t i = 0; i < _vcr.size(); i++)
	{
		if (_vcr[i] < min2 && _vcr[i] != min1)
			min2 = _vcr[i];
	}
	return (min2 - min1);
}

int	Span::longestSpan() const
{
	if (_vcr.size() == 1 || _vcr.empty() == true)
		throw SpanEmptySize();
	return (*std::max_element(_vcr.begin(), _vcr.end()) - *std::min_element(_vcr.begin(), _vcr.end()));
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
