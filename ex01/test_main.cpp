/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:10:31 by vvu               #+#    #+#             */
/*   Updated: 2023/10/17 14:11:00 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_1.hpp"

bool is_empty_or_whitespace(const std::string &str)
{
	if (std::all_of(str.begin(), str.end(), ::isspace))
	{
		std::cout << "Empty field." << std::endl;
		return false;
	}
	return true;
}

PhoneBook::PhoneBook() : current_contact(0){}

int	main()
{
	PhoneBook	phonebook;
	std::string	command;

	while (1)
	{
		if (std::cin.eof())
		{
			std::cout << "\nPlease do not press ctrl + d" << std::endl;
			break;
		}
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (!std::cin.eof() && !is_empty_or_whitespace(command))
			continue ;
		else if (command == "ADD" && !std::cin.eof())
		{
			phonebook.clear_input_buffer();
			phonebook.addcontact();
		}
		else if (command == "SEARCH" && !std::cin.eof())
		{
			phonebook.clear_input_buffer();
			phonebook.searchcontact();
		}
		else if (command == "EXIT")
			break ;
		else if (!std::cin.eof())
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
