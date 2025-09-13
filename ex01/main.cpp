#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		phonebook;
	std::string		input;

	while(input != "EXIT")
	{
		//phonebook.displayOptions();
		std::getline(std::cin, input);
		if(input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")	
			phonebook.searchContact();
		else if (input != "EXIT")
			std::cout << "invalid command" << std::endl;
	}
	return (0);
}