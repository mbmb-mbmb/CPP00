/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonsdor <mbonsdor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:09:20 by mbonsdor          #+#    #+#             */
/*   Updated: 2025/09/15 11:09:21 by mbonsdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
	Contact();

	void	setFirstName(const std::string &first_name);
	void	setLastName(const std::string &last_name);
	void	setNicname(const std::string &nic_name);
	void	setPhoneNumber(const std::string &phone_number);
	void	setDarkestSecret(const std::string &darkest_secret);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNicname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	private:
	std::string first_name;
	std::string last_name;
	std::string nic_name;
	std::string phone_number;
	std::string darkest_secret;
};

#endif
