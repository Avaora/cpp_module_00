#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::NewContact()
{
	arr[(index % 8)].SetContact(index + 1);
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	index++;
}

void	PhoneBook::PrintTable()
{
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "Firstname" << "|";
	std::cout << std::setw(10) << std::right << "Lastname" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		PrintRow(i);
		std::cout << std::endl;
	}
}

void	PhoneBook::PrintRow(size_t i)
{
	std::cout << std::setw(10) << std::right << (i + 1);
	std::cout << "|";
	if (arr[i].GetFirst().length() >= 10)
		std::cout << std::setw(10) << std::right << arr[i].GetFirst().substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << arr[i].GetFirst();
	std::cout << "|";
	if (arr[i].GetLast().length() >= 10)
		std::cout << std::setw(10) << std::right << arr[i].GetLast().substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << arr[i].GetLast();
	std::cout << "|";
	if (arr[i].GetNick().length() >= 10)
		std::cout << std::setw(10) << std::right << arr[i].GetNick().substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << arr[i].GetNick();
	std::cout << "|";
}

void	PhoneBook::PrintContact()
{
	std::string	str;
	std::cout << "Index for detailed view: ";
	std::getline(std::cin, str);
}