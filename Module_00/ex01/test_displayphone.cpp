/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_displayphone.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:31:58 by vvu               #+#    #+#             */
/*   Updated: 2023/10/20 11:30:13 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::normalize_tabs(const std::string &str) const
{
	std::string result;
	size_t pos;

	result = str;
	pos = 0;
	while ((pos = result.find("\t", pos)) != std::string::npos)
	{
		result.replace(pos, 1, "        ");
		pos += 8;
	}
	return result;
}

std::string Contact::truncate(const std::string &str) const
{
	std::string normalized;

	normalized = normalize_tabs(str);
	if (normalized.length() > 10)
		return (normalized.substr(0, 9) + ".");
	return (normalized);
}

void	Contact::displayshort(int index) const
{
	std::cout << std::right << std::setw(10) << index;
	std::cout << "|" << std::right << std::setw(10) << truncate(_first_name);
	std::cout << "|" << std::right << std::setw(10) << truncate(_last_name);
	std::cout << "|" << std::right << std::setw(10) << truncate(_nickname) << "|\n";
}

void	Contact::displayfull() const
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}
