/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 09:47:27 by vvu               #+#    #+#             */
/*   Updated: 2023/12/23 11:19:37 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_isGuard = false;
	this->_name = "";
	std::cout << "ScavTrap " << this->_name << " default Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_isGuard = false;
	std::cout << "ScavTrap " << this->_name << " parameterized Constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap Copy Constructor called for " << this->_name << "!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " Destructor called!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other){
		std::cout << "ScavTrap " << this->_name << " Assignment Operator called!" << std::endl;
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		std::cout << "ScavTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " has no energy point left!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " has no hp left to attack!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount){
	if (!this->_isGuard){
		if (this->_hitPoints > 0) {
			std::cout << "ScavTrap " << this->_name << " takes " << amount << 
			" points of damage!" << std::endl;
			this->_hitPoints -= (amount);
		}
		else
			std::cout << "ScavTrap " << this->_name << " has no hit points left." << std::endl;
		if (this->_hitPoints < 0)
			this->_hitPoints = 0;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode!" << std::endl;
}

void	ScavTrap::setGuard(std::string const input){
	if (input == "on") {
		this->_isGuard = true;
		std::cout << "ScavTrap " << this->_name << " is in Gate Keeper mode!" << std::endl;
	}
	else {
		this->_isGuard = false;
		std::cout << "ScavTrap " << this->_name << " is not in Gate Keeper mode!" << std::endl;
	}
}

void	ScavTrap::guardGate(void) {
	if (!this->_isGuard){
		std::cout << "ScavTrap " << this->_name << " is not in Gate Keeper mode!" << std::endl;
		std::cout << "Please use function setGuard(\"on\")" << std::endl;
	}
	else{
		std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode!" << std::endl;
		std::cout << "If you do not want to guard anymore.\nPLease use setGuard(\"off\")" << std::endl;
	}
}