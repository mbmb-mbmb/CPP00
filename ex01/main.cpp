#include <iostream>
#include <string>

int main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "too many argumnets or something" << std::endl;
		return(0);
	}
	std::string input = av[1];

	if(input == "ADD")
		std::cout << "add" << std::endl;
	else if (input == "SEARCH")	
	std::cout << "search" << std::endl;
	else if (input == "EXIT")
	{
		std::cout << "exiting" << std::endl;
		exit(0);
	}
	else
		std::cout << "nothing" << std::endl;
	return (0);
}