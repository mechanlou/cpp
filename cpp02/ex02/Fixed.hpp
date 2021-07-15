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
	Fixed	operator+(Fixed const &instance) const;
	Fixed	operator-(Fixed const &instance) const;
	Fixed	operator*(Fixed const &instance) const;
	Fixed	operator/(Fixed const &instance) const;
	bool	operator==(Fixed const &instance) const;
	bool	operator!=(Fixed const &instance) const;
	bool	operator<=(Fixed const &instance) const;
	bool	operator>=(Fixed const &instance) const;
	bool	operator<(Fixed const &instance) const;
	bool	operator>(Fixed const &instance) const;
	Fixed	operator++(int);
	Fixed	&operator++(void);
	Fixed	operator--(int);
	Fixed	&operator--(void);

	int		getRawBits(void) const;
	void	setRawBits(int const value);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed const	&min(Fixed const &f1, Fixed const &f2);
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed const	&max(Fixed const &f1, Fixed const &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);
	private :

	int					_value;
	static int const	_point_pos;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &instance);

#endif