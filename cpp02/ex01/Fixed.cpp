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
	this->_value = (int) value << Fixed::_point_pos;
	this->_value += (value - (int) value) * pow(2, Fixed::_point_pos);
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
	return (this->_value >> Fixed::_point_pos);
}

float	Fixed::toFloat(void) const
{
	float ret;

	ret = this->_value >> Fixed::_point_pos;
	ret += (this->_value - ((int)ret << 8)) / pow(2, Fixed::_point_pos);
	return (ret);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &instance)
{
	stream << instance.toFloat();
	return (stream);
}

int const	Fixed::_point_pos = 8;