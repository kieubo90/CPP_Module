/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:52:33 by vvu               #+#    #+#             */
/*   Updated: 2023/12/20 16:39:29 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();

		//Set & Get Functions for private memebers:
		void			setName(std::string newName);
		int				setAttack(const int newAttack);
		std::string		getName() const;
		int				getHitPoints() const;
		int				getAttack() const;
		int				getEnergyPoints() const;
		void			displayInformation() const;
		
		//Demand functions:
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};
