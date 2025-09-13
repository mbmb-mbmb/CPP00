#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:
	PhoneBook();
	void addContact();
	void searchContact() const;
	void displayOptions() const;
	void displayPhonebook() const;
	void displayContact(int index) const;

	private:
	Contact	phonebook[8];
	int		Contact_index = 0;
	int		MAX_ENTRIES = 8;

	std::string	truncateTen(const std::string &str) const;
	int			isEmpty(std::string str);
};

#endif