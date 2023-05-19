#include "PhoneBook.hpp"

void	PhoneBook::initAll()
{
	this->initBanner();
	this->initRoutine();
}

void	PhoneBook::initBanner()
{
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
}

void	PhoneBook::initRoutine()
{
	i = 0;
	while(1)
	{
		std::cout << std::endl;
		std::cout << "Insert a option: " << std::endl;
		std::getline(std::cin, input);
		for (int j = 0; input[j]; j++)
			input[j] = std::toupper(input[j]);
		if ((input.compare("ADD")) && (input.compare("SEARCH")) && (input.compare("EXIT"))){
			std::cout << std::endl << "This is a invalid option!" << std::endl;
			continue ;	
		}
		else if (!input.compare("ADD")){
			fillFields();
		}
		else if (!input.compare("SEARCH")){
			initPhonebookTable();
		}
		else if (!input.compare("EXIT")){
			return ;
		}
	}
	return ;
}

std::string	PhoneBook::checkLength(std::string input)
{
	if (input.length() > 10){
		input.resize(9);	
		input.push_back('.');
	}
	return (input);
}

void	PhoneBook::fillFields()
{
	std::cout << std::endl << "     Fill all the fields bellow:" << std::endl;				
	if (i > 7)
		i = 0;
	std::cout << "First Name: ";
	std::getline(std::cin, input);
	this->contacts[i].setFirstName(this->checkLength(input));
	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	this->contacts[i].setLastName(this->checkLength(input));
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	this->contacts[i].setNickname(checkLength(input));
	std::cout << "Phone Number: ";
	std::getline(std::cin, input);
	this->contacts[i].setPhoneNumber(input);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input);
	this->contacts[i].setDarkestSecret(input);
	i++;	
}

void	PhoneBook::initPhonebookTable()
{
	for (int j = 0; j < 9; j++){
		for (int k = 0; k < 45; k++)
			std::cout << "-";
		std::cout << std::endl << "|";
		for (int k = 0; k < 4; k++){
			std::cout << std::setw(11);
			std::cout << "|";
		}
		std::cout << std::endl;
		/*std::cout << std::setfill(' ');
		std::cout << std::setw(10);
		std::cout << this->contacts[0].getFirstName() << "|" << std::endl;*/
	}
	for (int k = 0; k < 45; k++)
		std::cout << "-";
	std::cout << std::endl << "Input the index of the contact:";
	std::getline(std::cin, input);	
}
