#include "PhoneBook.hpp"

std::string	resizeStr(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.push_back('.');
	}
	return (str);
}

void	printContactIndex(int sizeBook, PhoneBook *contact)
{
	std::string indexStr;
	int	index;

	std::cout << "\e[1;36mEnter index\e[0m > ";
	std::getline(std::cin, indexStr);
	if (indexStr.length() == 0)
	{
		std::cout << "\t\e[1;31mERROR INDEX\e[0m" << std::endl;
		return ;
	}
	for (size_t i = 0; i < indexStr.size(); i++)
	{
		if (isdigit(indexStr[i]) == 0)
		{
			std::cout << "\t\e[1;31mERROR INDEX\e[0m" << std::endl;
			return ;
		}
	}
	index = std::stoi(indexStr);
	if (index < 0 || index > sizeBook || (index == 0 && sizeBook == 0))
	{
			std::cout << "\t\e[1;31mERROR INDEX\e[0m" << std::endl;
			return ;
	}
	contact[index].printContact();
}

void	printPhoneBook(int sizeBook, PhoneBook *contact)
{
	std::cout << "\e[1;32m     INDEX|FIRST NAME| LAST NAME|  NICKNAME\e[0m" << std::endl;
	for (int i = 0; i < sizeBook; i++)
	{
		std::cout << std::setw(10);
		std::cout << i;
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << resizeStr(contact[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << resizeStr(contact[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << resizeStr(contact[i].getNickName()) << std::endl;
	}
	printContactIndex(sizeBook, contact);
}

int	main(void)
{
	std::string	command;
	PhoneBook	contact[8];
	int	sizeBook = 0;

	std::cout << std::endl;
	std::cout << "\t\e[1;33;4m!!! Welcome programm PhoneBook !!!\e[0m" << std::endl;
	std::cout << "Enter one of the following commands : \e[1;31mADD SEARCH EXIT\e[0m" << std::endl << std::endl;
	while (1)
	{
		std::cout << "COMMAND > ";
		command.empty();
		std::getline (std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
		{
			if (sizeBook == 8)
				std::cout << "\t\e[1;31m!!! Book is full !!!\e[0m" << std::endl << std::endl;
			else
				contact[sizeBook++].addContact();
		}
		else if (command == "SEARCH")
		{
			printPhoneBook(sizeBook, contact);
		}
	}
	return (0);
}
