#include "Karen.hpp"
#include <iostream>
#include <string>

void	Karen::debug(void)
{
	std::cout << "J’aime avoir du bacon supplémentaire pour mon burger 7XL-double-cheese-triple-pickle-special-ketchup. J’adore ça !" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "Je ne peux pas croire que l’ajout de bacon supplémentaire coûte plus cher. Vous n’en mettez pas assez ! Si vous le faisiez, je n’aurais pas à le demander !" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "Je pense que je mérite d’avoir dubacon supplémentaire gratuitement. Je viens ici depuis des années et vous n’avez commencé à travailler ici que le mois dernier." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "C’est inacceptable, je veux parler au responsable maintenant" << std::endl;
}

void	Karen::complain(std::string level)
{
	void		(Karen::*funcArray[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string	names[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;
	
	i = 0;
	while (i < 4 && names[i] != level)
		i++;
	if (i < 4)
		(this->*funcArray[i])();
}