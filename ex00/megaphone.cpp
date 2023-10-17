/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:23:44 by vvu               #+#    #+#             */
/*   Updated: 2023/10/16 15:32:23 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

std::string	each_character_to_upper(std::string name)
{
	int	current;

	current = 0;
	while (name[current] != '\0')
	{
		name[current] = toupper(name[current]);
		current++;
	}
	return (name);
}	

void	change_to_capital(char **av)
{
	std::string	name;
	int			current;

	current = 1;
	while (av[current] != NULL)
	{
		name = av[current];
		name = each_character_to_upper(name);
		std::cout << name;
		current++;
		if (av[current] != NULL)
		std::cout << " ";
	}
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
		change_to_capital(av);
	return 0;
}