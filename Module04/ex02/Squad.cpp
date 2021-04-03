#include "Squad.hpp"

Squad::Squad() : _count(0), _head(NULL)
{
}

Squad::Squad(const Squad& cpy) : _head(NULL)
{
	t_squad *tmp = this->_head;
	t_squad *oldElem = this->_head;
	t_squad *tmpCpy = cpy._head;

	for (int i = 0; i < this->getCount(); i++)
	{
		delete tmp->_s_unit;
		oldElem = tmp;
		tmp = oldElem->_next;
		delete oldElem;
	}

	for (int i = 0; i < cpy.getCount(); i++)
	{
		ISpaceMarine *cpyMarine = tmpCpy->_s_unit->clone();
		this->push(cpyMarine);
		tmpCpy = tmpCpy->_next;
	}
}

Squad &Squad::operator=(const Squad &oper)
{
	if (this == &oper)
		return *this;
	t_squad *tmp = this->_head;
	t_squad *oldElem = this->_head;
	t_squad *tmpCpy = oper._head;

	for (int i = 0; i < this->getCount(); i++)
	{
		delete tmp->_s_unit;
		oldElem = tmp;
		tmp = oldElem->_next;
		delete oldElem;
	}

	for (int i = 0; i < oper.getCount(); i++)
	{
		ISpaceMarine *cpyMarine = tmpCpy->_s_unit->clone();
		this->push(cpyMarine);
		tmpCpy = tmpCpy->_next;
	}
	return (*this);
}

int		Squad::getCount() const
{
	return (_count);
}

ISpaceMarine* Squad::getUnit(int pos) const
{
	t_squad	*tmp;
	int	i = getCount();
	tmp = _head;

	if (pos >= i || pos < 0)
		return (NULL);
	i = 0;
	while (i < pos)
	{
		tmp = tmp->_next;
		i++;
	}
	return (tmp->_s_unit);
}

int		Squad::push(ISpaceMarine *sUnit)
{
	t_squad	*tmp;

	tmp = _head;

	if (sUnit == NULL)
		return (getCount());
	if (_head == NULL)
	{
		_head = new t_squad;
		_head->_s_unit = sUnit;
		_head->_next = NULL;
		_count++;
		return (getCount());
	}
	while (tmp->_next)
	{
		if (tmp->_s_unit == sUnit)
			return (getCount());
		tmp = tmp->_next;
	}
	if (tmp->_s_unit == sUnit)
		return (getCount());
	tmp->_next = new t_squad;
	tmp->_next->_s_unit = sUnit;
	tmp->_next->_next = NULL;
	_count++;
	return (getCount());
}

Squad::~Squad()
{
	t_squad *old;

	if (_head)
	{
		while (_head)
		{
			delete _head->_s_unit;
			old = _head;
			_head = old->_next;
			delete old;
		}
		_head = NULL;
	}
}
