#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class	Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	pnumber;
		std::string	darkest_sec;
	public:
		Contact();
		void	SetContact();
		void	ViewContacts();
};
#endif