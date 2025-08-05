#include<iostream>
#include <string>
#include <algorithm>

int		main(int ac, char **av)
{
	std::string input;
	int i = 1;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < ac)
	{
		input = av[i];
		transform(input.begin(), input.end(), input.begin(), ::toupper);
		std::cout << input;
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return(0);
}