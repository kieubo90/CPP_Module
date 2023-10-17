/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_searchphone.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:25:06 by vvu               #+#    #+#             */
/*   Updated: 2023/10/17 13:11:22 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_1.hpp"

bool	check_empty_phonebook(int current_contact)
{
	if (current_contact == 0)
	{
		std::cout << "\nNothing in the phone boook yet." << std::endl;
		return false;
	}
	return true;
}

bool	error_check(const std::string &input)
{
	if (std::cin.eof() || !is_empty_or_whitespace(input))
		return false;
	else if (!std::all_of(input.begin() + 1, input.end(), ::isdigit))
	{
		std::cout << "Input needs to be a number." << std::endl;
		return false;
	}
	return true;
}

void	PhoneBook::searchcontact() const
{
	int			index;
	std::string	input;

	if (!check_empty_phonebook(current_contact))
		return ;
	for (int i = 0; i < current_contact; i++)
		contact[i].displayshort(i);
	std::cout << "Enter the index of the contact to display: " << std::endl;
	std::getline(std::cin, input);
	if (!error_check(input))
		return ;
	index = std::stoi(input);
	if (index >= 0 && index < current_contact)
		contact[index].displayfull();
	else if (index < 0)
		std::cout << "Input needs to be a non-negative number." << std::endl;
	else
		std::cout << "Invalid index!" << std::endl;
}