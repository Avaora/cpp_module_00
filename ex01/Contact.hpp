#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class	Contact
{
	private:
		size_t		index;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	pnumber;
		std::string	darkest_sec;
	public:
		Contact();
		void		SetContact(size_t i);
		std::string	GetFirst();
		std::string	GetLast();
		std::string	GetNick();
		std::string	GetPhone();
		std::string	GetDarkest();
};
#endif