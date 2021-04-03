#ifndef SQUAD_HPP
#define SQUAD_HPP
#include <iostream>
#include <string>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	typedef struct s_squad
	{
		ISpaceMarine	*_s_unit;
		struct s_squad	*_next;
	}				t_squad;
	int	_count;
	t_squad	*_head;
public:
	Squad();
	Squad(const Squad &cpy);
	Squad &operator=(const Squad &oper);
	virtual int getCount() const;
	virtual ISpaceMarine* getUnit(int pos) const;
	virtual int push(ISpaceMarine* sUnit);
	virtual ~Squad();
};

#endif
