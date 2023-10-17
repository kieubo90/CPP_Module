/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_displayphone.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:31:58 by vvu               #+#    #+#             */
/*   Updated: 2023/10/17 12:22:47 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook_1.hpp"

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
	std::cout << "|" << std::right << std::setw(10) << truncate(first_name);
	std::cout << "|" << std::right << std::setw(10) << truncate(last_name);
	std::cout << "|" << std::right << std::setw(10) << truncate(nickname) << "|" << std::endl;
}

void	Contact::displayfull() const
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
