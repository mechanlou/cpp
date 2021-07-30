#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public :
	
	class			GradeTooHighException : public std::exception
	{
		public :

		virtual const char	*what(void) const throw()
		{
			return ("Error, the grade is too high");
		}
	};

	class			GradeTooLowException : public std::exception
	{
		public :

		virtual const char	*what(void) const throw()
		{
			return ("Error, the grade is too low");
		}
	};

	class			FormNotSignedException : public std::exception
	{
		public :

		virtual const char	*what(void) const throw()
		{
			return ("Error, the form needs to be signed");
		}
	};

	Form(void);
	Form(Form const &src);
	Form(std::string name, int signGrade, int execGrade);
	virtual	~Form(void);
	int				getSignGrade(void) const;
	int				getExecGrade(void) const;
	bool			getSignedStatus(void) const;
	std::string		getName(void) const;
	void			beSigned(Bureaucrat const &guy);
	virtual void	execute(Bureaucrat const &executer) const = 0;

	private :

	std::string const	_name;
	int const			_signGrade;
	int const			_execGrade;
	bool				_isSigned;
};

std::ostream	&operator<<(std::ostream &o, Form const &src);

#endif