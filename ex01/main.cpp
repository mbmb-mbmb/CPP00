/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonsdor <mbonsdor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:09:24 by mbonsdor          #+#    #+#             */
/*   Updated: 2025/09/15 11:16:46 by mbonsdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook		phonebook;
	std::string		input;

	phonebook.displayOptions();
	while(input != "EXIT")
	{
		if(!std::getline(std::cin, input))
			break ;
		if(input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input != "EXIT")
			std::cout << "invalid command" << std::endl;
	}
	return (0);
}
