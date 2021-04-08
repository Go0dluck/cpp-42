 #ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
private:

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() : std::stack<T>()
	{
	};
	MutantStack(const MutantStack &cpy) : std::stack<T>(cpy)
	{

	};
	MutantStack &operator=(const MutantStack &oper)
	{
		if (this == &oper)
			return (*this);
		std::stack<T>::operator= (oper);
		return (*this);
	};
	~MutantStack()
	{
	};
	iterator	begin()
	{
		return (std::stack<T>::c.begin());
	};
	iterator	end()
	{
		return (std::stack<T>::c.end());
	}
};

#endif
