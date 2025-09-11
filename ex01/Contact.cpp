#include "Contact.hpp"

Contact::Contact() : index(), first_name(""), last_name(""), nic_name(""),
phone_number(""), darkest_secret(""){}

void	Contact::setIndex(const int &index)
{
	this->index = index;
}

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

int	Contact::getIndex() const
{
	return this->index;
}

std::string Contact::getFirstName() const 
{
	return this->first_name;
}

std::string Contact::getLastName() const 
{
	return this->last_name;
}

std::string Contact::getNicname() const 
{
	return this->nic_name;
}

std::string Contact::getPhoneNumber() const 
{
	return this->phone_number;
}

std::string Contact::getDarkestSecret() const 
{
	return this->darkest_secret;
}