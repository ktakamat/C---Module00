#include "Contact.hpp"

void	InputError(void)
{
	if (std::cin.fail() | std::cin.bad())
	{
		std::cin.clear();
		std::cin.ignore(255, '\n');
		std::cout << "wrong input" << std::endl;
		std::exit(EXIT_FAILURE);
	}
}

void	Contact::AddContact(void)
{
	int	num = 0;

	switch (num)
	{				
		case 0:
			std::cout << "His(Her) first name is..." << std::endl;
			std::getline(std::cin, this->first_name);
			InputError();
		case 1:
			std::cout << "His(Her) last name is..." << std::endl;
			std::getline(std::cin, this->last_name);
			InputError();
		case 2:
			std::cout << "His(Her) nick name is..." << std::endl;
			std::getline(std::cin, this->nick_name);
			InputError();
		case 3:
			std::cout << "His(Her) phone number is..." << std::endl;
			std::getline(std::cin, this->phone_number);
			InputError();
		case 4:
			std::cout << "His(Her) darkest secret is..." << std::endl;
			std::getline(std::cin, this->secret);
			InputError();
		case 5:
			std::cout << "Save his(her) Contact." << std::endl;
		num++;
	}
}

std::string	Contact::getShortStr(std::string str)
{
	if (static_cast<int>(str.size()) > 10)
		return (str.substr(0, 9) + ".");
	else
		return (std::string(10 - static_cast<int>(str.size()), ' ') +str);
}

void	Contact::PrintShortContact(void)
{
	std::cout << "|" << getShortStr(this->first_name)
			  << "|" << getShortStr(this->last_name)
			  << "|" << getShortStr(this->nick_name)
			  << "|" << std::endl;
}

void	Contact::PrintAllContact(void)
{
	std::cout << "first name : " << this->first_name << std::endl;
	std::cout << "last name : " << this->last_name << std::endl;
	std::cout << "nick name : " << this->nick_name << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret :" << this->secret << std::endl;
}
