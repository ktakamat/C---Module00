#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <climits>

class PhoneBook
{
	private:
		Contact contacts[8];
		int	index;

	public:
		PhoneBook();
		void	AddContact(void);
		void	PrintContact(void);
};

#endif
