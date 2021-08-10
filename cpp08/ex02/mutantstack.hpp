#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack(void) : std::stack<T>()
	{

	}
	MutantStack(MutantStack	const &src) : std::stack<T>(src)
	{

	}
	virtual				~MutantStack(void)
	{

	}
	MutantStack			&operator=(MutantStack const &src)
	{
		if (&src == this)
			return (*this);
		this->~MutantStack();
		return *new(this) MutantStack(src);
	}
	iterator			begin()
	{
		return (this->c.begin());
	}
	const_iterator	begin() const
	{
		return (this->c.begin());
	}
	iterator			end()
	{
		return (this->c.end());
	}
	const_iterator	end() const
	{
		return (this->c.end());
	}
};