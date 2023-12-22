/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:06 by vvu               #+#    #+#             */
/*   Updated: 2023/12/22 14:55:13 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &other);
		FragTrap(std::string const &name);
		~FragTrap(void);

		//Overload operator:
		FragTrap	&operator=(const FragTrap &other);

		//guardGate function:
		void		attack(std::string const &targer);
		void		highFivesGuys(void);
};