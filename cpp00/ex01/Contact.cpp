#include "Contact.hpp"

std::string	Contact::getFirstName(void){
	return (firstName);
}

void	Contact::setFirstName(std::string info){
	this->firstName = info;
}

std::string	Contact::getLastName(void){
	return (lastName);
}

void	Contact::setLastName(std::string info){
	this->lastName = info;
}

std::string	Contact::getNickname(void){
	return (nickname);
}

void	Contact::setNickname(std::string info){
	this->nickname = info;
}

std::string	Contact::getPhoneNumber(void){
	return (phoneNumber);
}

void	Contact::setPhoneNumber(std::string info){
	this->phoneNumber = info;
}

std::string	Contact::getDarkestSecret(void){
	return (darkestSecret);
}

void	Contact::setDarkestSecret(std::string info){
	this->darkestSecret = info;
}
