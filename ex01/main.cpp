#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	std::string	cmd("");
	PhoneBook	archive;
	
	std::cout << " Welcome to Crappy Awesome Phonebook\n";
	std::cout << "=====================================\n";
	std::cout << "Available Commands: ADD, SEARCH, EXIT\n";
	while (true)
	{
		std::cout << "Command: ";
		std::getline(std::cin, cmd);
		if (cmd.empty() == true)
			continue ;
		else if (cmd.compare("ADD") == 0)
			archive.NewContact();
		else if (cmd.compare("SEARCH") == 0)
		{
			archive.PrintTable();
			archive.PrintContact();
		}
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Command not found.\n";
		//std::cout << std::endl;
	}
	return (0);
}