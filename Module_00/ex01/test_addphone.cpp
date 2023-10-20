/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_addphone.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:30:12 by vvu               #+#    #+#             */
/*   Updated: 2023/10/20 11:30:09 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool	read_input(const std::string &prompt, std::string &result)
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
	if (!read_input("Enter first name: ", _first_name))
		return false;
	if (!read_input("Enter last name: ", _last_name))
		return false;
	if (!read_input("Enter nickname: ", _nickname))
		return false;
	if (!read_input("Enter phone number: ", _phone_number))
		return false;
	if (!read_input("Enter darkest secret: ", _darkest_secret))
		return false;
	return true;
}

void	PhoneBook::addcontact()
{
	bool	result;
	Contact	new_contact;

	if (current_contact < MAX_CONTACTS)
	{
		result = new_contact.setcontact();
		if (!result)
			return ;
		else if (result)
		{
			contact[current_contact] = new_contact;
			current_contact++;
		}
	}
	else if (current_contact == MAX_CONTACTS)
	{
		result = new_contact.setcontact();
		if (!result)
			return ;
		for (int i = 1; i < MAX_CONTACTS; i++)
			contact[i - 1] = contact[i];
		contact[MAX_CONTACTS - 1] = new_contact;
	}
}