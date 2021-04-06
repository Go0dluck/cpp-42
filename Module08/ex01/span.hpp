#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <string>
#include <vector>
#include <exception>
#include <algorithm>

class Span
{
private:
	int					_n;
	std::vector<int>	_vcr;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &cpy);
	Span &operator=(const Span &oper);
	~Span();

	void	addNumber(int num);
	int		shortestSpan() const;
	int		longestSpan() const;
	class SpanMaxSize: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class SpanEmptySize: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};


#endif
