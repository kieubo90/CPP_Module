/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:59:48 by vvu               #+#    #+#             */
/*   Updated: 2023/10/20 14:21:53 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact contact[MAX_CONTACTS];
		int	current_contact;
	public:
		void	set_current_contact(void);
		void	addcontact(void);
		void	searchcontact(void) const;
};

bool		is_empty_or_whitespace(const std::string &str);

#endif