#include "Contact.hpp"

Contact::Contact(void) {}

Contact::Contact(std::string first, std::string last, std::string nick, int number, std::string secret)
	: first_name(first), last_name(last), nickname(nick), phone_number(number), darkest_secret(secret)
{}

Contact::~Contact(void)
{}

int	Contact::get_number(void) const
{
	return (this->phone_number);
}

std::string	Contact::get_last(void) const
{
	return (this->last_name);
}

std::string	Contact::get_first(void) const
{
	return (this->first_name);
}

std::string	Contact::get_nick(void) const
{
	return (this->nickname);
}

std::string	Contact::get_secret(void) const
{
	return (this->darkest_secret);
}

void	Contact::set_number(int number)
{
	this->phone_number = number;
}

void	Contact::set_first(std::string first)
{
	this->first_name = first;
}

void	Contact::set_last(std::string last)
{
	this->last_name = last;
}

void	Contact::set_nick(std::string nick)
{
	this->nickname = nick;
}

void	Contact::set_secret(std::string secret)
{
	this->darkest_secret = secret;
}