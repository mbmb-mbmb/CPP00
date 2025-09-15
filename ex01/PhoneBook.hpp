/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonsdor <mbonsdor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:09:36 by mbonsdor          #+#    #+#             */
/*   Updated: 2025/09/15 11:09:37 by mbonsdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
