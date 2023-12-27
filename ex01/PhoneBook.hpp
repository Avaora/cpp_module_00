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
		int		index;
	public:
		PhoneBook();
		void	NewContact();
		void	PrintTable();
		void	PrintRow(int i);
		void	PrintContact();
		void	GetField(std::string &str, std::string prompt);
};
#endif
