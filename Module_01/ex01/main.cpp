/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:09:48 by vvu               #+#    #+#             */
/*   Updated: 2023/10/21 17:50:06 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int	main(void)
{
	int	N = 5;

	Zombie *horde = zombieHorde(N, "Zombie");

	delete[] horde;
	return (0);
}
