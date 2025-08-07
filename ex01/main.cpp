#include <iostream>
#include <string>

int main (int ac, char **av)
{
	if (ac != 1)
	{
		std::cout << "too many argumnets or something" << std::endl;
		return(0);
	}
	std::string input;
	std::cout<<"blaabla?" << std::endl;
	while(input != "EXIT")
	{
		std::getline(std::cin, input);
		if(input == "ADD")
			std::cout << "add" << std::endl;
		else if (input == "SEARCH")	
			std::cout << "search" << std::endl;
		else if (input != "EXIT")
			std::cout << "invalid" << std::endl;
	}
	return (0);
}