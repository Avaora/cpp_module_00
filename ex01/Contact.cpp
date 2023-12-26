#include "Contact.hpp"

Contact::Contact()
{
	index = 0;
	firstname = "";
	lastname = "";
	nickname = "";
	pnumber = "";
	darkest_sec = "";
}
void	Contact::SetContact(size_t i)
{
	index = i;
	std::cout << "Firstname: ";
	std::getline(std::cin, firstname);
	std::cout << "Lastname: ";
	std::getline(std::cin, lastname);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number: ";
	std::getline(std::cin, pnumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkest_sec);
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