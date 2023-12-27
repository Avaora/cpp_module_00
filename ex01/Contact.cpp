#include "Contact.hpp"

Contact::Contact()
{
	firstname = "";
	lastname = "";
	nickname = "";
	pnumber = "";
	darkest_sec = "";
}

Contact::~Contact()
{
	firstname = "";
	lastname = "";
	nickname = "";
	pnumber = "";
	darkest_sec = "";
}

std::string	Contact::GetFirst()
{
	return (firstname);
}

std::string	Contact::GetLast()
{
	return (lastname);
}

std::string	Contact::GetNick()
{
	return (nickname);
}

std::string	Contact::GetPhone()
{
	return (pnumber);
}

std::string	Contact::GetDarkest()
{
	return (darkest_sec);
}

void	Contact::SetFirst(std::string str)
{
	firstname = str;
}

void	Contact::SetLast(std::string str)
{
	lastname = str;
}

void	Contact::SetNick(std::string str)
{
	nickname = str;
}

void	Contact::SetPhone(std::string str)
{
	pnumber = str;
}

void	Contact::SetDarkest(std::string str)
{
	darkest_sec = str;
}