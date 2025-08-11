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
	PhoneBook::Contact_index = (PhoneBook::Contact_index + 1) % 8;

	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::searchContact() const
{
	std::cout << phonebook[0].getFirstName();
	std::cout << " | ";
	std::cout << phonebook[0].getLastName();
	std::cout << " | ";
	std::cout << phonebook[0].getNicname();
	std::cout << " | ";
	std::cout << phonebook[0].getPhoneNumber();
	std::cout << " | ";
	std::cout << phonebook[0].getDarkestSecret() << std::endl;;
}

void	PhoneBook::displayOptions() const
{
	std::cout<<"PHONEBOOK! ADD, SEARCH or EXIT" << std::endl;
}