/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:24:06 by vvu               #+#    #+#             */
/*   Updated: 2023/12/23 11:20:08 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	private:
		bool	_isGuard;
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &other);
		ScavTrap(std::string const &name);
		~ScavTrap(void);

		//Overload operator:
		ScavTrap	&operator=(const ScavTrap &other);

		//guardGate function:
		void		attack(std::string const &targer);
		void		takeDamage(unsigned int amount);
		void		setGuard(std::string const input);
		void		guardGate(void);
};