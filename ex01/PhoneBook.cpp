#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::NewContact()
{
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	pnumb;
	std::string	drksc;

	GetField(fname, "Firstname: ");	
	GetField(lname, "Lastname: ");
	GetField(nname, "Nickname: ");
	GetField(pnumb, "Phone Number: ");
	GetField(drksc, "Darkest Secret: ");

	arr[(index % 8)].SetFirst(fname);
	arr[(index % 8)].SetLast(lname);
	arr[(index % 8)].SetNick(nname);
	arr[(index % 8)].SetPhone(pnumb);
	arr[(index % 8)].SetDarkest(drksc);
	index++;
}

void	PhoneBook::PrintTable()
{
	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "Firstname" << "|";
	std::cout << std::setw(10) << std::right << "Lastname" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << "|";
	std::cout << std::endl;
	if (index < 8)
	{
		for (int i = 0; i < index; i++)
		{
			PrintRow(i);
			std::cout << std::endl;
		}
	}
	else if (index >= 8)
	{ 
		for (int i = 0; i < 8; i++)
		{
			PrintRow(i);
			std::cout << std::endl;
		}
	}
}

void	PhoneBook::PrintRow(int i)
{
	std::cout << std::setw(10) << std::right << (i + 1);
	std::cout << "|";
	if (arr[i].GetFirst().length() > 10)
		std::cout << std::setw(10) << std::right << arr[i].GetFirst().substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << arr[i].GetFirst();
	std::cout << "|";
	if (arr[i].GetLast().length() > 10)
		std::cout << std::setw(10) << std::right << arr[i].GetLast().substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << arr[i].GetLast();
	std::cout << "|";
	if (arr[i].GetNick().length() > 10)
		std::cout << std::setw(10) << std::right << arr[i].GetNick().substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << std::right << arr[i].GetNick();
	std::cout << "|";
}

void	PhoneBook::PrintContact()
{
	std::string	num("12345678");
	std::string	str;
	int			i;

	while (1)
	{
		std::cout << "Index for detailed view: ";
		std::getline(std::cin, str);
		if (std::cin.eof() == true)
			continue ;
		else if (str.empty() == true)
			continue ;
		else if (str.find_first_not_of(num) == std::string::npos)
		{
			if (str.length() > 1)
				std::cout << "ERROR: Invalid input!\n";
			else
			{
				i = std::stoi(str, NULL, 10);
				if (i > index)
				{
					std::cout << "ERROR: Invalid input!\n";
					break ;
				}
				std::cout << "Firstname: " << arr[i - 1].GetFirst() << std::endl;
				std::cout << "Lasttname: " << arr[i - 1].GetLast() << std::endl;
				std::cout << "Nicktname: " << arr[i - 1].GetNick() << std::endl;
				std::cout << "Phone Numebr: " << arr[i - 1].GetPhone() << std::endl;
				std::cout << "Darkest Secret: " << arr[i - 1].GetDarkest() << std::endl;
				break ;
			}
		}
		else
		{
			std::cout << "ERROR: Invalid input!\n";
			break ;
		}
	}
}

void	PhoneBook::GetField(std::string &str, std::string prompt)
{
	std::string alphnum("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, str);
		if (std::cin.eof() == true)
			continue ;
		else if (str.empty() == true)
			continue ;
		else if (str.find_first_of(alphnum) == std::string::npos)
		{
			std::cout << "ERROR: Invalid input!\n";
			continue ;
		}
		else
			break ;
	}
}