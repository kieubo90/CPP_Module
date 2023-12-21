/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:22:43 by vvu               #+#    #+#             */
/*   Updated: 2023/12/20 16:54:13 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap a("Vu");

	
	a.displayInformation();
	a.attack("Huong");
	a.displayInformation();
	a.takeDamage(10);
	a.displayInformation();
	a.takeDamage(10);
	a.displayInformation();
	a.beRepaired(10);
	a.displayInformation();
	return (0);
}