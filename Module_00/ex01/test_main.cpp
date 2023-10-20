/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:10:31 by vvu               #+#    #+#             */
/*   Updated: 2023/10/20 11:58:31 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool is_all_whitespace(const std::string& str) {
	for (std::size_t i = 0; i < str.length(); ++i)
	{
		if (!std::isspace(str[i]))
			return false;
	}
	return true;
}

bool is_empty_or_whitespace(const std::string &str)
{

	if (is_all_whitespace(str))
	{
		std::cout << "Empty field." << std::endl;
		return false;
	}
	return true;
}

void	PhoneBook::set_current_contact()
{
	current_contact = 0;
}

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	phonebook.set_current_contact();
	while (1)
	{
		if (std::cin.eof())
		{
			std::cout << "\nPlease do not press ctrl + d" << std::endl;
			return (0);
		}
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (command == "ADD" && !std::cin.eof())
			phonebook.addcontact();
		else if (command == "SEARCH" && !std::cin.eof())
			phonebook.searchcontact();
		else if (command == "EXIT")
			break ;
		else if (!std::cin.eof())
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
