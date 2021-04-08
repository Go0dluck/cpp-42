#include "span.hpp"

int	main()
{
	srand(time (0));
	try
	{
		std::cout << "===NORM SPAN===" <<std::endl;
		Span sp = Span(5);

		sp.addNumber(10);
		sp.addNumber(5);
		sp.addNumber(13);
		sp.addNumber(36);
		sp.addNumber(2);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "===EMPTY SPAN===" <<std::endl;
		Span sp = Span(5);

		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "===ONE ELEMENT SPAN===" <<std::endl;
		Span sp = Span(5);

		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "===MAX ELEMENT SPAN===" <<std::endl;
		Span sp = Span(5);

		sp.addNumber(10);
		sp.addNumber(5);
		sp.addNumber(13);
		sp.addNumber(36);
		sp.addNumber(2);
		sp.addNumber(10);
		sp.addNumber(5);
		sp.addNumber(13);
		sp.addNumber(36);
		sp.addNumber(2);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "===MORE ELEMENT SPAN===" <<std::endl;
		Span sp = Span(10000);

		std::vector<int> test;
		for (size_t i = 0; i < 10000; i++)
		{
			test.push_back(i + rand() % 560);
		}
		sp.addNumber(test.begin(), test.end());
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
