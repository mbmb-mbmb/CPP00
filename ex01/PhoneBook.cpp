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
	std::cout << "Enter index: ";
	std::cin >> index;
	if (index >= 0 && index < MAX_ENTRIES)
		displayContact(index);
	else
		std::cout << "ERROR" << std::endl; 
}

void	PhoneBook::displayContact(int index) const
{
	
}

void	PhoneBook::displayPhonebook() const
{

}

void	PhoneBook::displayOptions() const
{
	std::cout<<"PHONEBOOK! ADD, SEARCH or EXIT" << std::endl;
}