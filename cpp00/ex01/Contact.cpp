#include "Contact.hpp"

std::string	Contact::getFirstName(int f){
	if (f)
		return (firstName);
	return (firstNameDot);
}

int	Contact::setFirstName(std::string info){
	if (info.empty()){
		std::cout << std::endl;
		std::cout << "Fields can't be empty!" << std::endl;	
		return (1);
	}
	for (int i = 0; info[i]; i++){
		if (!isalpha(info[i])){
			std::cout << std::endl;
			std::cout << "Only alphabetical letters allowed!" << std::endl;
			std::cout << "Try again" << std::endl;
			return (1);
		}
	}
	this->firstName = info;
	info = this->checkLength(info);
	this->firstNameDot = info;
	return (0);
}

std::string	Contact::getLastName(int f){
	if (f)
		return (lastName);
	return (lastNameDot);
}

int	Contact::setLastName(std::string info){
	if (info.empty()){
		std::cout << std::endl;
		std::cout << "Fields can't be empty!" << std::endl;	
		return (1);
	}
	for (int i = 0; info[i]; i++){
		if (!isalpha(info[i])){
			std::cout << std::endl;
			std::cout << "Only alphabetical letters allowed!" << std::endl;
			std::cout << "Try again" << std::endl;
			return (1);
		}
	}
	this->lastName = info;
	info = checkLength(info);
	this->lastNameDot = info;
	return (0);
}

std::string	Contact::getNickname(int f){
	if (f)
		return (nickname);
	return (nicknameDot);
}

int	Contact::setNickname(std::string info){
	if (info.empty()){
		std::cout << std::endl;
		std::cout << "Fields can't be empty!" << std::endl;	
		return (1);
	}
	this->nickname = info;
	info = checkLength(info);
	this->nicknameDot = info;
	return (0);
}

std::string	Contact::getPhoneNumber(int f){
	if (f)
		return (phoneNumber);
	return (phoneNumberDot);
}

int	Contact::setPhoneNumber(std::string info){
	if (info.empty()){
		std::cout << std::endl;
		std::cout << "Fields can't be empty!" << std::endl;	
		return (1);
	}
	for (int i = 0; info[i]; i++){
		if (!isdigit(info[i])){
			std::cout << std::endl;
			std::cout << "Only digits allowed!" << std::endl;
			std::cout << "Try again" << std::endl;
			return (1);
		}
	}
	this->phoneNumber = info;
	info = checkLength(info);
	this->phoneNumberDot = info;
	return (0);
}

std::string	Contact::getDarkestSecret(int f){
	if (f)
		return (darkestSecret);
	return (darkestSecretDot);
}

int	Contact::setDarkestSecret(std::string info){
	if (info.empty()){
		std::cout << std::endl;
		std::cout << "Fields can't be empty!" << std::endl;
		return (1);
	}
	this->darkestSecret = info;
	info = checkLength(info);
	this->darkestSecretDot = info;
	return (0);
}

std::string Contact::checkLength(std::string info)
{
	if (info.length() > 10){
		info.resize(9);
		info.push_back('.');
	}
	return (info);
}
