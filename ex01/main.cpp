#include "Contact.hpp"

int	addContact(std::deque<Contact> &phonebook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nic_name;
	std::string	phone_number;
	std::string	darkest_secret;

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

	Contact newContact;
	newContact.setFirstName(first_name);
	newContact.setLastName(last_name);
	newContact.setNicname(nic_name);
	newContact.setPhoneNumber(phone_number);
	newContact.setDarkestSecret(darkest_secret);
	phonebook.push_back(newContact);
	std::cout << "Contact added successfully" << std::endl;

	return (1);
}

int main (int ac, char **av)
{
	if (ac != 1)
	{
		std::cout << "too many argumnets or something" << std::endl;
		return(0);
	}
	std::deque<Contact> phonebook;
	std::string			input;

	while(input != "EXIT")
	{
		std::cout<<"blaabla?" << std::endl;
		std::getline(std::cin, input);
		if(input == "ADD")
			addContact(phonebook);
		else if (input == "SEARCH")	
			std::cout << "search" << std::endl;
		else if (input != "EXIT")
			std::cout << "invalid" << std::endl;
	}
	return (0);
}