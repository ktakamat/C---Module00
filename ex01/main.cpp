#include <iostream>
#include <string>
#include "PhoneBook.hpp"


int	main(void)
{
	std::string	cmd;
	PhoneBook	phonebook;

	while (true)
	{
		std::cout << "please enter your command:(ADD,SEARCH,EXIT)"<<std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.fail() | std::cin.bad())
		{
			std::cin.clear();
			std::cin.ignore(255, '\n');
			std::cout << "wrong input" << std::endl;
			std::exit(EXIT_FAILURE);
		}
		if (cmd == "ADD")
		{
			phonebook.AddContact();
		}
		else if (cmd == "SEARCH")
		{
			phonebook.PrintContact();
		}
		else if (cmd == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "sorry, command not found" << std::endl;
		}
	}
	return(0);
}
