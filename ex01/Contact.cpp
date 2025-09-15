/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonsdor <mbonsdor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:09:15 by mbonsdor          #+#    #+#             */
/*   Updated: 2025/09/15 11:09:16 by mbonsdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : first_name(""), last_name(""), nic_name(""),
phone_number(""), darkest_secret(""){}

void	Contact::setFirstName(const std::string &first_name)
{
	this->first_name = first_name;
}

void	Contact::setLastName(const std::string &last_name)
{
	this->last_name = last_name;
}

void	Contact::setNicname(const std::string &nic_name)
{
	this->nic_name = nic_name;
}

void	Contact::setPhoneNumber(const std::string &phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::setDarkestSecret(const std::string &darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

std::string Contact::getFirstName() const
{
	return (first_name);
}

std::string Contact::getLastName() const
{
	return (last_name);
}

std::string Contact::getNicname() const
{
	return (nic_name);
}

std::string Contact::getPhoneNumber() const
{
	return (phone_number);
}

std::string Contact::getDarkestSecret() const
{
	return (darkest_secret);
}
