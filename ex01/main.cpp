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
		std::cin >> cmd;
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