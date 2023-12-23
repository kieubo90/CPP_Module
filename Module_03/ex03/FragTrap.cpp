/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:47:27 by vvu               #+#    #+#             */
/*   Updated: 2023/12/23 11:11:20 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_name = "";
	std::cout << "FragTrap " << this->_name << " default Constructor called!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " parameterized Constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	*this = other;
	std::cout << "FragTrap Copy Constructor called for " << this->_name << "!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " Destructor called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	if (this != &other){
		std::cout << "FragTrap " << this->_name << " Assignment Operator called!" << std::endl;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	FragTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "FragTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << this->_name << " has no energy point left!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " has no hp left to attack!" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "Yay Hive Fives Guys. No fighting!!!" << std::endl;
}