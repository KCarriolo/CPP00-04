#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		std::string	getFirstName();
		void		setFirstName(std::string info);
		std::string	getLastName();
		void		setLastName(std::string info);
		std::string	getNickname();
		void		setNickname(std::string info);
		std::string	getPhoneNumber();
		void		setPhoneNumber(std::string info);
		std::string	getDarkestSecret();
		void		setDarkestSecret(std::string info);
};
#endif
