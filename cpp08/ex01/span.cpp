#include "span.hpp"

Span::Span(unsigned int N)
{
	_values = new std::vector<int>(N, 0);
	_it = _values->begin();
}

Span::~Span(void)
{
	delete _values;
}

void	Span::addNumber(int number) throw(std::exception)
{
	if (_it == _values->end())
		throw(std::exception());
	*_it = number;
	_it++;
}

int	Span::shortestSpan(void) const throw(std::exception)
{
	int							span;
	std::vector<int>			sorted(_values->begin(), _it);
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	end_it;
	
	if (_it - _values->begin() < 2)
		throw(std::exception());
	std::sort(sorted.begin(), sorted.end());
	it = sorted.begin();
	end_it = sorted.end();
	span = *(it + 1) - *it;
	while (it + 1 != end_it)
	{
		if (*(it + 1) - *it < span)
			span = *(it + 1) - *it;
		it++;
	}
	return (span);
}

int	Span::longestSpan(void) const throw(std::exception)
{
	std::vector<int>			sorted(_values->begin(), _it);
	
	if (_it - _values->begin() < 2)
		throw(std::exception());
	std::sort(sorted.begin(), sorted.end());
	return (*(sorted.end() - 1) - *(sorted.begin()));
}

