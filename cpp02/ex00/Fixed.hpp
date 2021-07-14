#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public :

	Fixed(void);
	Fixed(Fixed &instance);
	~Fixed(void);
	Fixed	&operator=(Fixed &instance);
	int		getRawBits(void) const;
	void	setRawBits(int const value);

	private :

	int					_value;
	static int const	_point_pos;
};

#endif