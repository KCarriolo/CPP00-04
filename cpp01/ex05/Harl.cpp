#include "Harl.hpp"

Harl::Harl(void){
	this->lst_ref[0] = "DEBUG";
	this->lst_ref[1] = "INFO";
	this->lst_ref[2] = "WARNING";
	this->lst_ref[3] = "ERROR";
	this->f[0] = &Harl::debug;						
	this->f[1] = &Harl::info;						
	this->f[2] = &Harl::warning;						
	this->f[3] = &Harl::error;						
}

Harl::~Harl(void){}

void	Harl::debug(void){
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;	
	return ;
}

void	Harl::info(void){
	std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;	
	return ;
}

void	Harl::warning(void){
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void){
	std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;	
	return ;
}

void	Harl::complain(std::string level){
	int	length;
	int i = 0;
	length = level.length();
	for (int i = 0; i < length; i++){
		level[i] = std::toupper(level[i]);	
	}
	while (i < 4)
	{
		if (!level.compare(lst_ref[i]))
			break ;
		i++;
	}
	switch (i)
	{
		case (0):
			(this->*f[0])();	
			break ;
		case (1):
			(this->*f[1])();
			break ;
		case (2):
			(this->*f[2])();
			break ;
		case (3):
			(this->*f[3])();
			break ;
		default:
			std::cout << "Harl doesn't know how to complain about this." << std::endl;
			break ;
	}
	return ;
}
