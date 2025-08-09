#ifndef PHONEBOOK_HPP

#define PHONEBOOK_HPP

#include <deque>
#include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	void addContact();
	void searchContact() const;
	void displayOptions() const;

	private:
	std::deque<Contact> contacts;
	static const int MAX_CONTACTS = 8;
};

#endif