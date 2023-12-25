#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <iomanip>
# include <string>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact arr[8];
		size_t	index;
	public:
		PhoneBook();
		void	NewContact();
		void	PrintTable();
};
#endif