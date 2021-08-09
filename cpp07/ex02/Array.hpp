#pragma once

template <typename T>
class	Array
{
	public :

	Array<T>(void) : _size(0)
	{
		_array = new T[0];
	}
	Array<T>(unsigned int n) : _size(n)
	{
		_array = new T[n];
		unsigned int	i;

		i = 0;
		while (i < _size)
		{
			_array[i] = 0;
			i++;
		}
	}
	Array<T>(Array<T> &src) : _size(src.size()), _array(new T[_size])
	{
		unsigned int	i;

		i = 0;
		while (i < _size)
		{
			_array[i] = src[i];
			i++;
		}
	}
	virtual			~Array<T>(void)
	{
		delete [] _array;
	}
	unsigned int	size(void) const
	{
		return (_size);
	}
	T				&operator[](unsigned int	i) throw(std::exception)
	{
		if (i < 0 || i >= _size)
			throw(std::exception());
		return (_array[i]);
	}
	Array<T>		&operator=(Array<T> &src)
	{
		unsigned int	i;

		delete [] _array;
		_size = src.size();
		_array = new T[_size];
		i = 0;
		while (i < _size)
		{
			_array[i] = src[i];
			i++;
		}
		return (*this);
	}

	private :

	unsigned int	_size;
	T				*_array;
};
