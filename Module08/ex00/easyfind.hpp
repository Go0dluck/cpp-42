#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define VIOLET "\033[35m"

template <typename T>
int		easyfind(T &cont, int i)
{
	typename T::const_iterator itr = std::find(cont.begin(), cont.end(), i);
	if (itr == cont.end())
		return (0);
	else
		return (1);
}
#endif
