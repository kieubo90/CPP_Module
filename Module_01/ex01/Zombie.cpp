/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:02:30 by vvu               #+#    #+#             */
/*   Updated: 2023/10/21 17:09:44 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::Zombie(std::string zname) : name(zname) {}

Zombie::~Zombie()
{
	std::cout << name << " is destroyed.\n";
}

void	Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::setName(std::string zname)
{
	name = zname;
}

