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
		~Contact();
		std::string	GetFirst();
		std::string	GetLast();
		std::string	GetNick();
		std::string	GetPhone();
		std::string	GetDarkest();
		void		SetFirst(std::string str);
		void		SetLast(std::string str);
		void		SetNick(std::string str);
		void		SetPhone(std::string str);
		void		SetDarkest(std::string str);
};
#endif