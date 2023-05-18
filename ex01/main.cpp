#include <iostream>
#include <iomanip>
#include <cctype>
#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	int			i = 0;
	std::string	input;
	std::string	info;
	std::cout << std::endl << "============================================" << std::endl;
	std::cout << "| ";
	std::cout << " Welcome to my Awesome 80's PhoneBook!! " << " |" << std::endl;
	std::cout << "============================================" << std::endl << std::endl;
	std::cout << std::setw(16);
	std::cout << "" << "OPTIONS:" << std::endl << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "ADD    - Save a new contact" << std::endl;
	std::cout << "SEARCH - Display a specific contact" << std::endl;
	std::cout << "EXIT   - Exit program(This action implies the lost of all contacts informations!)" << std::endl;
	std::cout << std::endl;
	PhoneBook	Phonebook;	

	while(1)
	{
		std::cout << std::endl;
		std::cout << "Insert a option: " << std::endl;
		std::getline(std::cin, input);
		for (int i = 0; input[i]; i++)
			input[i] = std::toupper(input[i]);
		if ((input.compare("ADD")) && (input.compare("SEARCH")) && (input.compare("EXIT"))){
			std::cout << std::endl << "This is a invalid option!" << std::endl;
			continue ;	
		}
		else if (!input.compare("ADD")){
			std::cout << std::endl << "     Fill all the fields bellow:" << std::endl;				
			if (i > 7)
				i = 0;
			std::cout << "First Name: ";
			std::getline(std::cin, info);
			Phonebook.contacts[i].setFirstName(info);
			std::cout << "Last Name: ";
			std::getline(std::cin, info);
			Phonebook.contacts[i].setLastName(info);
			std::cout << "Nickname: ";
			std::getline(std::cin, info);
			Phonebook.contacts[i].setNickname(info);
			std::cout << "Phone Number: ";
			std::getline(std::cin, info);
			Phonebook.contacts[i].setPhoneNumber(info);
			std::cout << "Darkest Secret: ";
			std::getline(std::cin, info);
			Phonebook.contacts[i].setDarkestSecret(info);
			i++;
		}
		else if (!input.compare("SEARCH")){
			std::cout << std::setfill(' ');
			std::cout << std::setw(10);
			std::cout << Phonebook.contacts[0].getFirstName() << "|" << std::endl;	
		}
		else if (!input.compare("EXIT")){
			return (0);
		}
	}
	return (0);
}
