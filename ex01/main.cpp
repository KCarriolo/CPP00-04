#include <iostream>
#include <iomanip>
#include <cctype>

int	main(int argc, char **argv)
{
	std::string	input;
	std::cout << std::endl << "============================================" << std::endl;
	std::cout << "| ";
	std::cout << " Welcome to my Awesome 80's PhoneBook!! " << " |" << std::endl;
	std::cout << "============================================" << std::endl << std::endl;
	std::cout << std::setw(16);
	std::cout << "" << "OPTIONS:" << std::endl << std::endl;
	std::cout << "ADD    - Save a new contact" << std::endl;
	std::cout << "SEARCH - Display a specific contact" << std::endl;
	std::cout << "EXIT   - Exit program(This action implies the lost of all contacts informations!)" << std::endl;
	std::cout << std::endl;

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
		else if (!input.compare("EXIT")){
			//Free e return
			return (0);
		}
		std::cout << "NOICE" << std::endl;
	}
	return (0);
}
