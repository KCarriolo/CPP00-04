#include "PhoneBook.hpp"

void	PhoneBook::initAll()
{
	this->initBanner();
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
