#include "Book.hpp"

Book::Book(void) : number(0), oldest(0)
{
}

Book::~Book(void)
{
}

void	Book::_set_new_params(std::string first, std::string last, std::string nick, std::string secret, int phone)
{
	int	current;

	if (this->number == 8)
	{
		current = this->oldest;
		this->oldest++;
		if (this->oldest == 8)
			this->oldest = 0;
	}
	else
	{
		current = this->number;
		this->number++;
	}
	this->friends[current].set_first(first);
	this->friends[current].set_last(last);
	this->friends[current].set_nick(nick);
	this->friends[current].set_secret(secret);
	this->friends[current].set_number(phone);
}

void	Book::add(void)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	secret;
	int			phone;

	phone = 0;
	std::cout << "First name ?" << std::endl;
	std::cin >> first;
	std::cout << "Last name ?" << std::endl;
	std::cin >> last;
	std::cout << "Nickname ?" << std::endl;
	std::cin >> nick;
	std::cout << "Darkest secret ?" << std::endl;
	std::cin >> secret;
	do
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Numéro ?" << std::endl;
		std::cin >> phone;
	} while (std::cin.fail() || phone < 100000000 || phone >= 1000000000);
	_set_new_params(first, last, nick, secret, phone);
	std::cout << "Contact ajouté !" << std::endl;
}

void	Book::_print_formatted_string(std::string str) const
{
	int	i;
	int	nb_space;

	if (str.size() > 10)
		nb_space = 0;
	else
		nb_space = 10 - str.size();
	i = 0;
	while (i < nb_space)
	{
		std::cout << ' ';
		i++;
	}
	while (i < 9)
	{
		std::cout << str[i - nb_space];
		i++;
	}
	if (str.size() > 10)
		std::cout << '.';
	else 
		std::cout << str[i - nb_space];
}


void	Book::_print_low_info_tab(void) const
{
	int	i;

	i = 0;
	while (i < this->number)
	{
		std::cout << '|' << i << '|';
		_print_formatted_string(this->friends[i].get_first());
		std::cout << '|';
		_print_formatted_string(this->friends[i].get_last());
		std::cout << '|';
		_print_formatted_string(this->friends[i].get_nick());
		std::cout << '|' << std::endl;
		i++;
	}
}

void	Book::search(void) const
{
	int	index;

	if (this->number == 0)
		std::cout << "Vous n'avez pas d'ami D:" << std::endl;
	else
	{
		_print_low_info_tab();
		do
		{
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Qui voulez vous découvrir ?" << std::endl;
			std::cin >> index;
		} while (std::cin.fail() || index < 0 || index > this->number - 1);
		std::cout << "First name : " << this->friends[index].get_first() << std::endl;
		std::cout << "Last name : " << this->friends[index].get_last() << std::endl;
		std::cout << "Nick name : " << this->friends[index].get_nick() << std::endl;
		std::cout << "Phone number : " << "+33" << this->friends[index].get_number() << std::endl;
		std::cout << "Darkest scret : " << this->friends[index].get_secret() << std::endl;
	}
}