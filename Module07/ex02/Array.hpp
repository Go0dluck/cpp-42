#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>
#include <string>

template <class T>
class Array
{
	private:
		unsigned int	_len;
		T				*_arr;
	public:
		Array()
		{
			_len = 0;
			_arr = new T[0];
		}
		Array(const unsigned int len)
		{
			_len = len;
			_arr = new T[len];
		}
		unsigned int	size()
		{
			return (_len);
		}
		Array(const Array &cpy)
		{
			_len = cpy._len;
			_arr = new T[cpy._len];
			for (unsigned int i = 0; i < cpy._len; i++)
			{
				 _arr[i] = cpy._arr[i];
			}
		}
		Array &operator=(const Array &oper)
		{
			if (this == &oper)
				return (*this);
			_len = oper._len;
			_arr = new T[oper._len];
			for (unsigned int i = 0; i < oper._len; i++)
			{
				 _arr[i] = oper._arr[i];
			}
			return (*this);
		}
		~Array()
		{
			delete[] _arr;
		}
		T& operator[](unsigned int index)
		{
			if (index < 0 || index >= _len)
				throw IndexTooHigh();
			return (_arr[index]);
		}
		class IndexTooHigh: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Error Index Array");
				}
		};
};
#endif
