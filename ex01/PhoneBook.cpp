#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook() {}

void	PhoneBook::addContact()
{
	std::string first_name, last_name, nic_name, phone_number, darkest_secret;

	std::cout << "Enter first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nic_name);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);

	Contact	newContact;
	newContact.setFirstName(first_name);
	newContact.setLastName(last_name);
	newContact.setNicname(nic_name);
	newContact.setPhoneNumber(phone_number);
	newContact.setDarkestSecret(darkest_secret);

	phonebook[Contact_index] = newContact;
	PhoneBook::Contact_index = (PhoneBook::Contact_index + 1) % MAX_ENTRIES;

}

void	PhoneBook::searchContact() const
{
	int	index;
	displayPhonebook();
	std::cout << "ENTER INDEX: ";
	std::cin >> index;
	std::cin.ignore();
	if (index >= 0 && index < Contact_index)
		displayContact(index);
	else
		std::cout << "ERROR: Invalid index" << std::endl;
}

void	PhoneBook::displayContact(int index) const
{
	std::cout << "|" << index << 
				"|" << phonebook[index].getFirstName() << 
				"|" << phonebook[index].getLastName() <<
				"|" << phonebook[index].getNicname() <<
				"|" << phonebook[index].getPhoneNumber() <<
				"|" << phonebook[index].getDarkestSecret() << std::endl;
				 
}

void	PhoneBook::displayPhonebook() const
{

	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for(int i = 0; i < Contact_index; i++)
	{
		std::cout << "|" << i << 
					"|" << phonebook[i].getFirstName() <<
					"|" << phonebook[i].getLastName() <<
					"|" << phonebook[i].getNicname() << std::endl;
	}
}

void	PhoneBook::displayOptions() const
{
	std::cout<<"Commands: ADD, SEARCH or EXIT. Indexes 0 - 7." << std::endl;
}