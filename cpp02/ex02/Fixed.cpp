#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) : _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : _value(value << Fixed::_point_pos)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value)
{
	int	div_value;
	int	i;

	this->_value = (int) value << Fixed::_point_pos;
	i = 0;
	div_value = 1;
	while (i < Fixed::_point_pos)
	{
		div_value *= 2;
		i++;
	}
	this->_value += (value - (int) value) * (float) div_value;
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &instance)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &instance)
{
	// std::cout << "Assignation operator called" << std::endl;
	this->_value = instance.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &instance) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() + instance.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &instance) const
{
	Fixed	tmp;

	tmp.setRawBits(this->getRawBits() - instance.getRawBits());
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const &instance) const
{
	Fixed	tmp;

	if (instance.toInt() != 0)
		tmp.setRawBits(this->getRawBits() >> (instance.toInt() - 1));
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const &instance) const
{
	Fixed	tmp;

	if (instance.toInt() != 0)
		tmp.setRawBits(this->getRawBits() << (instance.toInt() - 1));
	else
		tmp.setRawBits(0);
	return (tmp);
}

bool	Fixed::operator==(Fixed const &instance) const
{
	return (this->getRawBits() == instance.getRawBits());
}

bool	Fixed::operator!=(Fixed const &instance) const
{
	return (this->getRawBits() != instance.getRawBits());
}

bool	Fixed::operator<=(Fixed const &instance) const
{
	return (this->getRawBits() <= instance.getRawBits());
}

bool	Fixed::operator>=(Fixed const &instance) const
{
	return (this->getRawBits() >= instance.getRawBits());
}

bool	Fixed::operator>(Fixed const &instance) const
{
	return (this->getRawBits() > instance.getRawBits());
}

bool	Fixed::operator<(Fixed const &instance) const
{
	return (this->getRawBits() < instance.getRawBits());
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() + 1);
	return (tmp);
}

Fixed	&Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->setRawBits(this->getRawBits() - 1);
	return (tmp);
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
	i = 0;
	div_value = 1;
	while (i < Fixed::_point_pos)
	{
		div_value *= 2;
		i++;
	}
	ret += (this->_value - ((int)ret << Fixed::_point_pos)) / (float) div_value;
	return (ret);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &instance)
{
	stream << instance.toFloat();
	return (stream);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

int const	Fixed::_point_pos = 8;