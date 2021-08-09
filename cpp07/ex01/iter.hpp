#pragma once

template <typename T>
void	iter(T array[], int len, void	(*func)(T&))
{
	int	i;

	i = 0;
	while (i < len)
		func(array[i++]);
}