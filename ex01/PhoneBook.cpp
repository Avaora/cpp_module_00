#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::NewContact()
{
	if (index == 7)
		index = 0;
	arr[index].SetContact();
	index++;
}