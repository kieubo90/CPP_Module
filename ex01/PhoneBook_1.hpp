/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_1.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:59:48 by vvu               #+#    #+#             */
/*   Updated: 2023/10/17 14:10:33 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_1_HPP
# define PHONEBOOK_1_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define MAX_CONTACTS 8

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	
	public:
		bool		setcontact();
		void		displayshort(int index) const;
		void		displayfull() const;
		std::string	truncate(const std::string &str) const;
		std::string	normalize_tabs(const std::string &str) const;
};

class PhoneBook
{
	private:
		Contact contact[MAX_CONTACTS];
		int	current_contact;
	public:
		PhoneBook();
		void	addcontact();
		void	searchcontact() const;
		void	clear_input_buffer() const
		{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
};

bool		is_empty_or_whitespace(const std::string &str);

#endif