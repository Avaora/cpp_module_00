#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact arr[8];
		int		index;
	public:
		PhoneBook();
		void	NewContact();
};
#endif