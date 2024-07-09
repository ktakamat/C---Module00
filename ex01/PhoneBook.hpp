#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	index;

	public:
		PhoneBook() : index(0) {}
		void	AddContact(void);
		void	PrintContact(void);
};

#endif
