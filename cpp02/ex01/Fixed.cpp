#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : _value(value << Fixed::_point_pos)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
	int	div_value;
	int	i;

	this->_value = (int) value << Fixed::_point_pos;
	i = 1;
	div_value = 1;
	while (i < Fixed::_point_pos)
	{
		div_value *= 2;
		i++;
	}
	this->_value += (value - (int) value) * (float) div_value;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &instance)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_value = instance.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const value)
{
	this->_value = value;
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

float	Fixed::toFloat(void) const
{
	float	ret;
	int		i;
	int		div_value;

	ret = this->_value >> Fixed::_point_pos;
	i = 1;
	div_value = 1;
	while (i < Fixed::_point_pos)
	{
		div_value *= 2;
		i++;
	}
	ret += (this->_value - ((int)ret << 8)) / (float) div_value;
	return (ret);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &instance)
{
	stream << instance.toFloat();
	return (stream);
}

int const	Fixed::_point_pos = 8;