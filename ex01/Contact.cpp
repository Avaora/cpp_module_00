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
	std::cin >> firstname;
	std::cout << "Lastname: ";
	std::cin >> lastname;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> pnumber;
	std::cout << "Darkest Secret: ";
	std::cin >> darkest_sec;
}

std::string	Contact::GetField(const std::string field)
{
	std::string	ret("");

	if (field.compare("Firstname") == 0)
		ret = firstname;
	else if (field.compare("Lastname") == 0)
		ret = lastname;
	else if (field.compare("Nickname") == 0)
		ret = nickname;
	else if (field.compare("Phone Number") == 0)
		ret = pnumber;
	else if (field.compare("Darkest Secret") == 0)
		ret = darkest_sec;
	return (ret);
}