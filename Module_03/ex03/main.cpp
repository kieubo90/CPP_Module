/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:22:43 by vvu               #+#    #+#             */
/*   Updated: 2023/12/23 12:59:37 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap a("A");
	DiamondTrap b;
	ScavTrap	c;


	a.displayInformation();
	b.displayInformation();
	c.displayInformation();

	
	// std::cout << a.getName() << std::endl;
	// std::cout << a.getHitPoints() << std::endl;
	// std::cout << a.getAttack() << std::endl;
	// std::cout << a.getEnergyPoints() << std::endl;
	
	// std::cout << b.getName() << std::endl;
	// std::cout << b.getHitPoints() << std::endl;
	// std::cout << b.getAttack() << std::endl;
	// std::cout << b.getEnergyPoints() << std::endl;
	return (0);
}