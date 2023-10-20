/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_searchphone.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:25:06 by vvu               #+#    #+#             */
/*   Updated: 2023/10/20 11:32:32 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool	check_empty_phonebook(int current_contact)
{
	if (current_contact == 0)
	{
		std::cout << "\nNothing in the phone boook yet." << std::endl;
		return false;
	}
	return true;
}

bool alldigit(const std::string &input, int flag)
{
	for (std::string::const_iterator it = input.begin() + flag; it != input.end(); ++it)
		if (!isdigit(*it))
			return false;
	return true;
}
static bool	error_check(const std::string &input)
{
	if (std::cin.eof() || !is_empty_or_whitespace(input))
		return false;
	else if ((input[0] == '-') && alldigit(input, 1))
	{
		std::cout << "Input needs to be a non-negative number." << std::endl;
		return false;
	}
	else if ((input[0] == '+') && alldigit(input, 1))
		return true;
	else if (!alldigit(input, 0))
	{
		std::cout << "Input needs to be a number." << std::endl;
		return false;
	}
	return true;
}

static void	header_call(void)
{
	std::cout << std::right << std::setw(10) << "Index";
	std::cout << "|" << std::right << std::setw(10) << "First name";
	std::cout << "|" << std::right << std::setw(10) << "Last name";
	std::cout << "|" << std::right << std::setw(10) << "Nickname" << "|\n";
}

void	PhoneBook::searchcontact() const
{
	int			index;
	std::string	input;

	if (!check_empty_phonebook(current_contact))
		return ;
	header_call();
	for (int i = 0; i < current_contact; i++)
		contact[i].displayshort(i);
	std::cout << "Enter the index of the contact to display: " << std::endl;
	std::getline(std::cin, input);
	if (!error_check(input))
		return ;
	index = std::atoi(input.c_str());
	if (index >= 0 && index < current_contact)
		contact[index].displayfull();
	else
		std::cout << "Invalid index\n";
}