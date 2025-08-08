#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {

	public:
	Contact();
	//destructor??

	void	setFirstName(const std::string& first_name);
	void	setLastName(const std::string& last_name);
	void	setNicname(const std::string& nic_name);
	void	setPhoneNumber(const std::string& phone_number);
	void	setDarkestSecret(const std::string& darkest_secret);

	private:
		std::string first_name;
		std::string last_name;
		std::string nic_name;
		std::string phone_number;
		std::string darkest_secret;	
};

#endif