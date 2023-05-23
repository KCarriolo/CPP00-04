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
	contact_count = -1;
	while(1)
	{
		std::cout << std::endl;
		std::cout << "Insert a option: " << std::endl;
		if(std::getline(std::cin, input).eof())
			exit (0);
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

void	PhoneBook::fillFields()
{
	std::cout << std::endl << "     Fill all the fields bellow:" << std::endl;	
	if (i > 7)
		i = 0;
	info.clear();
	while (info.empty()){
		std::cout << "First Name: ";	
		if(std::getline(std::cin, info).eof())
			exit (0);
		if (!this->contacts[i].setFirstName(info))
			break ;
		info.clear();
	}
	info.clear();	
	while (info.empty()){
		std::cout << "Last Name: ";
		if(std::getline(std::cin, info).eof())
			exit (0);
		if(!this->contacts[i].setLastName(info))
			break ;
		info.clear();
	}
	info.clear();
	while (info.empty()){
		std::cout << "Nickname: ";
		if(std::getline(std::cin, info).eof())
			exit (0);
		if(!this->contacts[i].setNickname(info))
			break ;
		info.clear();
	}
	info.clear();
	while (info.empty()){
		std::cout << "Phone Number: ";
		if(std::getline(std::cin, info).eof())
			exit (0);
		if(!this->contacts[i].setPhoneNumber(info))
			break ;
		info.clear();
	}
	info.clear();
	while (info.empty()){
		std::cout << "Darkest Secret: ";
		if(std::getline(std::cin, info).eof())
			exit (0);
		if(!this->contacts[i].setDarkestSecret(info))
			break ;
		info.clear();
	}
	info.clear();
	i++;
	contact_count = 0;
}

void	PhoneBook::initPhonebookTable()
{
	c = 0;
	info.clear();
	for (int j = 0; j < 8; j++){
		for (int k = 0; k < 45; k++)
			std::cout << "-";
		std::cout << std::endl << "|";
		if (contact_count >= 0){
			fillTable(c);
			c++;
		}
		else{
			std::cout << std::setw(10);
			std::cout << c;
			std::cout << "|";
			c++;
			for (int k = 0; k < 3; k++){
				std::cout << std::setw(11);
				std::cout << "|";
			}
		}
		std::cout << std::endl;
	}
	for (int k = 0; k < 45; k++)
		std::cout << "-";
	std::cout << std::endl << "Input the index of the contact:";
	if(std::getline(std::cin, info).eof())
		exit (0);
	checkIndexInput();
	if(checkEntries()){
		std::cout << std::endl << "There is no contacts on Phonebook list!" << std::endl;
		return ;
	}
}

int	PhoneBook::checkEntries()
{
	if (contact_count >= 0)
		return (0);
	return (1);
}

void	PhoneBook::fillTable(int c)
{
	std::cout << std::setw(10);
	std::cout << c << "|";
	std::cout << std::setw(10);
	std::cout << this->contacts[c].getFirstName(0) << "|";
	std::cout << std::setw(10);
	std::cout << this->contacts[c].getLastName(0) << "|";
	std::cout << std::setw(10);
	std::cout << this->contacts[c].getNickname(0) << "|";
}

int	PhoneBook::checkIndexInput()
{
	int	n;
	if (info.length() != 1){
		std::cout << "Index must be one digit length!" << std::endl;
		info.clear();
		return (1);
	}
	else if (info.find_first_of("01234567") == std::string::npos){
		std::cout << "Index must be between 0-7!" << std::endl;	
		info.clear();
		return (1);
	}
	n = atoi(info.c_str());
	if (printContactInfo(n)){
		std::cout << std::endl;
		std::cout << "There is no contact entries for this index!" << std::endl;
		info.clear();
		return (1);
	}
	return (0);
}

int	PhoneBook::printContactInfo(int n)
{
	if (this->contacts[n].getFirstName(1).empty())
		return (1);			
	std::cout << std::endl << "First Name: ";
	std::cout << std::setw(5) << "";
	std::cout << this->contacts[n].getFirstName(1) << std::endl;
	std::cout << "Last Name: ";
	std::cout << std::setw(6) << "";
	std::cout << this->contacts[n].getLastName(1) << std::endl;
	std::cout << "Nickname: ";
	std::cout << std::setw(7) << "";
	std::cout << this->contacts[n].getNickname(1) << std::endl;
	std::cout << "Phone Number: ";
	std::cout << std::setw(3) << "";
	std::cout << this->contacts[n].getPhoneNumber(1) << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << std::setw(1) << "";
	std::cout << this->contacts[n].getDarkestSecret(1) << std::endl;
	return (0);
}
