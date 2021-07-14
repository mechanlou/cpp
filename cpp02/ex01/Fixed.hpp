#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public :

	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &instance);
	~Fixed(void);

	Fixed	&operator=(Fixed const &instance);

	int		getRawBits(void) const;
	void	setRawBits(int const value);
	float	toFloat(void) const;
	int		toInt(void) const;

	private :

	int					_value;
	static int const	_point_pos;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &instance);

#endif