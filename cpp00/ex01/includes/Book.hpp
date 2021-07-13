#ifndef BOOK_HPP
# define BOOK_HPP

#include "Contact.hpp"

class Book
{
	public :

	Book(void);
	~Book(void);
	void	add(void);
	void	search(void) const;

	private :

	void		_print_formatted_string(std::string str) const;
	void		_set_new_params(std::string first, std::string last, std::string nick, std::string secret, int number);
	void		_print_low_info_tab(void) const;
	int			number;
	int			oldest;
	Contact		friends[8];
};

#endif