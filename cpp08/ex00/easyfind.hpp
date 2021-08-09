#pragma once

#include <stdlib.h>
#include <algorithm>

template <typename T>
bool	easyfind(T cont, int value)
{
	typename T::iterator it;

	it = find(cont.begin(), cont.end(), value);
	if (it != cont.end())
		return (true);
	return (false);
}