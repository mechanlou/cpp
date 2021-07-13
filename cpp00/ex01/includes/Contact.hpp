#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	public :

	Contact(void);
	Contact(std::string first, std::string last, std::string nick, int number, std::string secret);
	~Contact(void);

	std::string	get_last(void) const;
	std::string	get_first(void) const;
	std::string	get_nick(void) const;
	std::string	get_secret(void) const;
	int			get_number(void) const;
	void		set_last(std::string change);
	void		set_first(std::string change);
	void		set_nick(std::string change);
	void		set_secret(std::string change);
	void		set_number(int change);

	private :

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	int			phone_number;
	std::string	darkest_secret;
};
#endif