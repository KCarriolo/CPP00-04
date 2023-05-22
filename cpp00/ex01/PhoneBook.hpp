#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <cctype>
# include <iomanip>
# include <cstdlib>

class PhoneBook{
	public:
		Contact		contacts[8];	
		void		initAll();
	private:
		int						i;
		int						c;
		int						contact_count;
		std::string				info;
		std::string				input;
		void					initBanner();
		void					initRoutine();
		void					initPhonebookTable();
		void					fillFields();
		void					clearFields(int i);
		void					fillTable(int c);
		int						checkEntries();
		int						checkIndexInput();
		int						printContactInfo(int n);
};
#endif
