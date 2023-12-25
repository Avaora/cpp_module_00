#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::NewContact()
{
	arr[(index % 8)].SetContact(index + 1);
	index++;
}

void	PhoneBook::PrintTable()
{
	std::cout << std::setw(10) << std::right << "Index";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Firstname";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Lastname";
	std::cout << "|";
	std::cout << std::setw(10) << std::right << "Nickname";
	std::cout << "|";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << std::right << (i + 1);
		std::cout << "|";
		std::cout.width(10);
		if (arr[i].GetField("Firstname").length() >= 10)
			std::cout << std::setw(10) << std::right << arr[i].GetField("Firstname").resize(9) << ".";
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << arr[i].GetField("Lastname");
		std::cout << "|";
		std::cout.width(10);
		std::cout << std::right << arr[i].GetField("Nickname");
		std::cout << "|" << std::endl;
	}
}