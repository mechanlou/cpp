#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

class	Bureaucrat
{
	public :
	
	class			GradeTooHighException : public std::exception
	{
		public :

		virtual const char	*what(void) const throw()
		{
			return ("Error, max grade is 1");
		}
	};

	class			GradeTooLowException : public std::exception
	{
		public :

		virtual const char	*what(void) const throw()
		{
			return ("Error, min grade is 150");
		}
	};

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	virtual	~Bureaucrat(void);
	Bureaucrat		&operator=(const Bureaucrat &src);
	int				getGrade(void) const;
	std::string		getName(void) const;
	void			incGrade(void) throw(GradeTooHighException);
	void			decGrade(void) throw(GradeTooLowException);

	private :

	std::string	_name;
	int			_grade;
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &src);

#endif