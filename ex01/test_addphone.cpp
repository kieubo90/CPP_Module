/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_addphone.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:30:12 by vvu               #+#    #+#             */
/*   Updated: 2023/10/17 14:37:02 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_1.hpp"

bool	read_input(const std::string &prompt, std::string &result)
{
	std::cout << prompt;
	std::getline(std::cin, result);
	if (std::cin.eof())
	{
		std::cout << std::endl;
		return false;
	}
	if (!is_empty_or_whitespace(result))
		return false;
	return true;
}

bool	Contact::setcontact()
{
	if (!read_input("Enter first name: ", first_name))
		return false;
	if (!read_input("Enter last name: ", last_name))
		return false;
	if (!read_input("Enter nickname: ", nickname))
		return false;
	if (!read_input("Enter phone number: ", phone_number))
		return false;
	if (!read_input("Enter darkest secret: ", darkest_secret))
		return false;
	return true;
}

void	PhoneBook::addcontact()
{
	std::cout << current_contact << std::endl;
	if (!contact[current_contact].setcontact())
		return ;
	if (current_contact == MAX_CONTACTS)
	{
		for (int i = 1; i < MAX_CONTACTS; i++)
			contact[i - 1] = contact[i];
		current_contact--;
	}
	else
		current_contact++;
}