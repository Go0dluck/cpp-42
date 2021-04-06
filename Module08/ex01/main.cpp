#include "span.hpp"

int	main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(10);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(1);
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
