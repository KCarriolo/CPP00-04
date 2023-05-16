#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		std::string	getFirstName();
		void		setFirstName(std::string str);
		std::string	getLastName();
		void		setLastName(std::string str);
		std::string	getNickname();
		void		setNickname(std::string str);
		std::string	getPhoneNumber();
		void		setPhoneNumber(std::string str);
		std::string	getDarkestSecret();
		void		setDarkestSecret(std::string str);
};
#endif
