#pragma once

#include <algorithm>
#include <vector>
#include <exception>

class	Span
{
	public :

	Span(unsigned int N);
	virtual ~Span(void);
	void	addNumber(int number) throw(std::exception);
	int		shortestSpan(void) const throw(std::exception);
	int		longestSpan(void) const throw(std::exception);

	template <typename Iterator>
	void	addRange(Iterator begin, Iterator end) throw(std::exception)
	{
		if (end - begin > static_cast<long>(_values->size() - (_it - _values->begin())))
			throw(std::exception());
		while (begin != end)
		{
			*_it = *begin;
			_it++;
			begin++;
		}
	}

	private :

	std::vector<int>			*_values;
	std::vector<int>::iterator	_it;
	
	Span(void);
	Span(Span const &src);
	Span &operator=(Span const &src);
};