/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:22:43 by vvu               #+#    #+#             */
/*   Updated: 2023/12/22 15:14:21 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap a("A");
	ClapTrap b("B");
	FragTrap c("C");
	
	//First display information:
	a.displayInformation();
	b.displayInformation();
	c.displayInformation();
	
	//a attack b:
	a.attack(b.getName());
	std::cout << "\n";
	
	//Assume b take damage:
	std::cout << "B take " << a.getAttack() << " damage" << std::endl;
	b.takeDamage(a.getAttack());
	b.displayInformation();
	
	//b attack a:
	b.attack(a.getName());
	std::cout << "A take " << a.getAttack() << " damage" << std::endl;
	a.takeDamage(b.getAttack());
	a.displayInformation();
	
	//C yelling high fives:
	c.highFivesGuys();
	
	//Time to repair:
	std::cout << "Time to repair both a and b" << std::endl;
	a.beRepaired(b.getAttack());
	b.beRepaired(a.getAttack());
	a.displayInformation();
	b.displayInformation();
	return (0);
}