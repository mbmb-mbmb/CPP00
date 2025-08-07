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
	while(input != "EXIT")
	{
		std::cout<<" blaabla?" << std::endl;
		std::getline(std::cin, input);
		if(input == "ADD")
			std::cout << "add" << std::endl;
		else if (input == "SEARCH")	
			std::cout << "search" << std::endl;
		else
			std::cout << "nothing" << std::endl;
	}
	return (0);
}