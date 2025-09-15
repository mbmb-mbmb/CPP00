/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonsdor <mbonsdor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:09:33 by mbonsdor          #+#    #+#             */
/*   Updated: 2025/09/15 16:52:43 by mbonsdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if(isEOF() || isEmpty(first_name)) return ;

	std::cout << "Enter last name: ";
	std::getline(std::cin, last_name);
	if(isEOF() || isEmpty(last_name)) return ;

	std::cout << "Enter nickname: ";
	std::getline(std::cin, nic_name);
	if(isEOF() || isEmpty(nic_name)) return ;

	std::cout << "Enter phone number: ";
	std::getline(std::cin, phone_number);
	if(isEOF() || isEmpty(phone_number)) return ;

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if(isEOF() || isEmpty(darkest_secret)) return ;

	Contact	newContact;
	newContact.setFirstName(first_name);
	newContact.setLastName(last_name);
	newContact.setNicname(nic_name);
	newContact.setPhoneNumber(phone_number);
	newContact.setDarkestSecret(darkest_secret);

	phonebook[Contact_index] = newContact;
	PhoneBook::Contact_index = (PhoneBook::Contact_index + 1) % MAX_ENTRIES;
}

int	PhoneBook::isEOF()
{
	if(std::cin.eof())
	{
		std::cout << std::endl;
		return (1);
	}
	return (0);
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
	std::string	index;

	displayPhonebook();
	std::cout << "ENTER INDEX: ";

	if(!std::getline(std::cin, index) || std::cin.eof())
	{
		std::cout << std::endl;
		return ;
	}

	if(index.length() == 1 && index >= "1" && index <= "8" && stoi(index) <= Contact_index)
		displayContact(stoi(index) - 1);
	else
		std::cout << "ERROR: Invalid index" << std::endl;
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
		std::cout << "|"<< std::string(9, ' ') << i + 1 <<
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
