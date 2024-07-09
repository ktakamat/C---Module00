#include "Contact.hpp"

void	Contact::AddContact(void)
{
	std::cout << "His(Her) first name is..." << std::endl;
	std::cin >> this->first_name;
	std::cout << "His(Her) last name is..." << std::endl;
	std::cin >> this->last_name;
	std::cout << "His(Her) nick name is..." << std::endl;
	std::cin >> this->nick_name;
	std::cout << "His(Her) phone number is..." << std::endl;
	std::cin >> this->phone_number;
	std::cout << "His(Her) darkest secret is..." << std::endl;
	std::cin >> this->secret;
	std::cout << "Save his(her) Contact." << std::endl;
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
