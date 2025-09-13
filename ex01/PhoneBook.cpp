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
	if (isEmpty(first_name)) return ;
	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	if (isEmpty(last_name)) return ;
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nic_name);
	if (isEmpty(nic_name)) return ;
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	if (isEmpty(phone_number)) return ;
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (isEmpty(darkest_secret)) return ;

	Contact	newContact;
	newContact.setFirstName(first_name);
	newContact.setLastName(last_name);
	newContact.setNicname(nic_name);
	newContact.setPhoneNumber(phone_number);
	newContact.setDarkestSecret(darkest_secret);

	phonebook[Contact_index] = newContact;
	PhoneBook::Contact_index = (PhoneBook::Contact_index + 1) % MAX_ENTRIES;

}

int	PhoneBook::isEmpty(std::string str)
{
	if(str.empty())
	{
		std::cout << "Field can't be empty" << std::endl;
		return (1);
	}
	return (0);
}

std::string	PhoneBook::truncateTen(const std::string &str) const
{
	if (str.length() <= 10)
		return (std::string(10 - str.length(), ' ') + str);
	return (str.substr(0, 9) + ".");
}

void	PhoneBook::searchContact() const
{
	int	index;
	displayPhonebook();
	std::cout << "ENTER INDEX: ";
	std::cin >> index;
	
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "ERROR: Invalid input" << std::endl;
		return;
	}
	
	std::cin.ignore();
	if (index >= 0 && index < Contact_index)
		displayContact(index);
	else
	{
		std::cout << "ERROR: Invalid index" << std::endl;
		return;
	}
}

void	PhoneBook::displayContact(int index) const
{
	std::cout << "First Name: " << phonebook[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << phonebook[index].getLastName() << std::endl;
	std::cout << "Nickname: " << phonebook[index].getNicname() << std::endl;
	std::cout << "Phone Number: " << phonebook[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << phonebook[index].getDarkestSecret() << std::endl;
				 
}

void	PhoneBook::displayPhonebook() const
{

	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for(int i = 0; i < Contact_index; i++)
	{
		std::cout << "|"<< std::string(9, ' ') << i <<
					"|" << truncateTen(phonebook[i].getFirstName()) <<
					"|" << truncateTen(phonebook[i].getLastName()) <<
					"|" << truncateTen(phonebook[i].getNicname()) << 
					"|" << std::endl;
	}
}

void	PhoneBook::displayOptions() const
{
	std::cout<<"Commands: ADD, SEARCH or EXIT." << std::endl;
}