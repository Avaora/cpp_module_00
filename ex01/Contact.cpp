#include "Contact.hpp"

Contact::Contact()
{
	firstname = "";
	lastname = "";
	nickname = "";
	pnumber = "";
	darkest_sec = "";
}
void	Contact::SetContact()
{
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

//void	Contact::ViewContact()