#include "PhoneBook.hpp"

void	PhoneBook::addContact(void)
{
	std::string str;
	int	err = 0;

	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mFirst Name\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mFirst Name empty\e[0m" << std::endl;
			continue ;
		}
		for (size_t i = 0; i < str.length(); i++)
		{
			if (isdigit(str[i]) != 0)
			{
				std::cout << "\t\e[1;31mERROR First Name\e[0m" << std::endl;
				err = 1;
				break ;
			}
		}
		if (err == 1)
			continue ;
		this->_firstName = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mLast Name\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mLast Name empty\e[0m" << std::endl;
			continue ;
		}
		for (size_t i = 0; i < str.length(); i++)
		{
			if (isdigit(str[i]) != 0)
			{
				std::cout << "\t\e[1;31mERROR Last Name\e[0m" << std::endl;
				err = 1;
				break ;
			}
		}
		if (err == 1)
			continue ;
		this->_lastName = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mNick Name\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mNick Name empty\e[0m" << std::endl;
			continue ;
		}
		this->_nickName = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mLogin\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mLogin empty\e[0m" << std::endl;
			continue ;
		}
		this->_login = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mPostal Address\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mPostal Address empty\e[0m" << std::endl;
			continue ;
		}
		this->_postalAddress = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mEmail Address\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mEmail Address empty\e[0m" << std::endl;
			continue ;
		}
		this->_emailAddress = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mPhone Number\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0 || str.length() > 11 || str.length() < 11)
		{
			std::cout << "\t\e[1;31mPhone Number empty or error length\e[0m" << std::endl;
			continue ;
		}
		for (size_t i = 0; i < str.length(); i++)
		{
			if (isdigit(str[i]) == 0)
			{
				std::cout << "\t\e[1;31mERROR Phone Number \e[0m" << std::endl;
				err = 1;
				break ;
			}
		}
		if (err == 1)
			continue ;
		this->_phoneNumber = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mBirthday Date\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mBirthday Date empty\e[0m" << std::endl;
			continue ;
		}
		this->_birthdayDate = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mFavorite Meal\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mFavorite Meal empty\e[0m" << std::endl;
			continue ;
		}
		this->_favoriteMeal = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mUnderwear Color\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mUnderwear Color empty\e[0m" << std::endl;
			continue ;
		}
		this->_underwearColor = str;
		break ;
	}
	while (1)
	{
		err = 0;
		std::cout << "\t\e[1;36mDarkest Secret\e[0m > ";
		std::getline(std::cin, str);
		if (str.length() == 0)
		{
			std::cout << "\t\e[1;31mDarkest Secret empty\e[0m" << std::endl;
			continue ;
		}
		this->_darkestSecret = str;
		break ;
	}
	std::cout << std::endl << "\t\e[1;32;4m!!! Contact added successfully !!!\e[0m" << std::endl << std::endl;
	return ;
}

void	PhoneBook::printContact(void)
{
	std::cout << std::endl << "\t\e[1;36mFirst Name\e[0m - ";
	std::cout << this->_firstName << std::endl;
	std::cout << "\t\e[1;36mLast Name\e[0m - ";
	std::cout << this->_lastName << std::endl;
	std::cout << "\t\e[1;36mNick Name\e[0m - ";
	std::cout << this->_nickName << std::endl;
	std::cout << "\t\e[1;36mLogin\e[0m - ";
	std::cout << this->_login << std::endl;
	std::cout << "\t\e[1;36mPostal Address\e[0m - ";
	std::cout << this->_postalAddress << std::endl;
	std::cout << "\t\e[1;36mEmail Address\e[0m - ";
	std::cout << this->_emailAddress << std::endl;
	std::cout << "\t\e[1;36mPhone Number\e[0m > ";
	std::cout << this->_phoneNumber << std::endl;
	std::cout << "\t\e[1;36mBirthday Date\e[0m > ";
	std::cout << this->_birthdayDate << std::endl;
	std::cout << "\t\e[1;36mFavorite Meal\e[0m > ";
	std::cout << this->_favoriteMeal << std::endl;
	std::cout << "\t\e[1;36mUnderwear Color\e[0m > ";
	std::cout << this->_underwearColor << std::endl;
	std::cout << "\t\e[1;36mDarkest Secret\e[0m > ";
	std::cout << this->_darkestSecret << std::endl << std::endl;
	return ;
}

std::string	PhoneBook::getFirstName(void)
{
	return (this->_firstName);
}

std::string	PhoneBook::getLastName(void)
{
	return (this->_lastName);
}

std::string	PhoneBook::getNickName(void)
{
	return (this->_nickName);
}
