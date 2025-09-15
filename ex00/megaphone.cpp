/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonsdor <mbonsdor@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 11:08:58 by mbonsdor          #+#    #+#             */
/*   Updated: 2025/09/15 11:08:59 by mbonsdor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <string>

std::string	ft_transform(std::string input)
{
	int		i = 0;

	while(i < input.size())
	{
		input[i] = std::toupper(static_cast<unsigned char>(input[i]));
		i++;
	}
	return (input);
}

int		main(int ac, char **av)
{
	std::string		input;
	int				i = 1;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while(i < ac)
	{
		input = av[i];
		std::cout << ft_transform(input);
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return(0);
}
