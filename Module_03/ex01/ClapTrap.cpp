/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:58:15 by vvu               #+#    #+#             */
/*   Updated: 2023/12/21 16:23:18 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : _name(newName), _hitPoints(10),
 _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor argument called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout<< "Desconstructor called" <<std::endl;
}

void	ClapTrap::setName(std::string newName){
	this->_name = newName;
}

std::string	ClapTrap::getName() const{
	return (this->_name);
}

int	ClapTrap::getHitPoints() const{
	return (this->_hitPoints);
}

int	ClapTrap::getAttack() const{
	return (this->_attackDamage);
}

int	ClapTrap::getEnergyPoints() const{
	return (this->_energyPoints);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_energyPoints == 0){
		std::cout << "No energy left!" << std::endl;
		return ;
	}
	else if (this->_hitPoints <= 0){
		std::cout << "No hit point left!" << std::endl;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << 
	" causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_energyPoints == 0){
		std::cout << "No energy left!" << std::endl;
		return ;
	}
	if (this->_hitPoints >= amount) {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << 
		" points of damage!" << std::endl;
		this->_hitPoints -= (amount);
		if (this->_hitPoints == 0)
			std::cout << "No more hit points left." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no hit points left." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0){
		std::cout << "No energy left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself, gaining " << 
	amount << " hit points!" << std::endl;
	this->_hitPoints += (amount);
	this->_energyPoints -= 1;
}

int	ClapTrap::setAttack(const int newAttack){
	return (this->_attackDamage = newAttack);
}

void	ClapTrap::displayInformation()const {
	std::cout << "name " << this->getName() << std::endl;
	std::cout << "_hitpoints " << this->getHitPoints() << std::endl;
	std::cout << "_attack " << this->getAttack() << std::endl;
	std::cout << "_energyPoints " << this->getEnergyPoints()  << std::endl;
	std::cout << "\n\n";
}