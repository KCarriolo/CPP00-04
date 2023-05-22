#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>

class Contact{
	private:
		std::string firstName;
		std::string firstNameDot;
		std::string lastName;
		std::string lastNameDot;
		std::string nickname;
		std::string nicknameDot;
		std::string phoneNumber;
		std::string phoneNumberDot;
		std::string darkestSecret;
		std::string darkestSecretDot;
		std::string	checkLength(std::string info);
	public:
		std::string	getFirstName(int f);
		int			setFirstName(std::string info);
		std::string	getLastName(int f);
		int			setLastName(std::string info);
		std::string	getNickname(int f);
		int			setNickname(std::string info);
		std::string	getPhoneNumber(int f);
		int			setPhoneNumber(std::string info);
		std::string	getDarkestSecret(int f);
		int			setDarkestSecret(std::string info);
};
#endif
