#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>
# include <cctype>
# include <iomanip>

class PhoneBook{
	public:
		Contact		contacts[8];	
		void		initAll();
	private:
		int						i;
		int						contact_count;
		std::string				input;
		void					initBanner();
		void					initRoutine();
		void					initPhonebookTable();
		void					fillFields();
		void					fillTable(int c);
		int						checkEntries();
		std::string	checkLength(std::string input);
};
#endif
