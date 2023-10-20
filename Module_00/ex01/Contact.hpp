/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:29:13 by vvu               #+#    #+#             */
/*   Updated: 2023/10/20 11:36:52 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include "PhoneBook.hpp"

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
	
	public:
		bool		setcontact(void);
		void		displayshort(int index) const;
		void		displayfull(void) const;
		std::string	truncate(const std::string &str) const;
		std::string	normalize_tabs(const std::string &str) const;
};

#endif