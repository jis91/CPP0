#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook
{
	private:
		static const int _maxContacts = 8;
		Contact	_contacts[_maxContacts];
		int		_numberOfContacts;
		int		_nextIndex;
		void displayPhonebook() const;
		void displayContact(int index) const;
	public:
		PhoneBook();
		~PhoneBook();
		bool addContact();
		bool search();
};


#endif