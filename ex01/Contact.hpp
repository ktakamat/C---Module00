#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	secret;

		std::string	getShortStr(std::string str);

	public:
		void	AddContact(void);
		void	PrintShortContact(void);
		void	PrintAllContact(void);
};

#endif
