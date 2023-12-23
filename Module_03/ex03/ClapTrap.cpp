/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvu <vvu@student.hive.fi>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:58:15 by vvu               #+#    #+#             */
/*   Updated: 2023/12/23 10:41:08 by vvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : _name(newName), _hitPoints(10),
 _energyPoints(10), _attackDamage(0){
	std::cout << "ClapTrap " << this->_name << " created." << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	*this = other;
	std::cout << "ClapTrap " << this->_name << " copied." << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout<< "ClapTrap " << this->_name << " Destructor called" <<std::endl;
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
	if (this->_energyPoints && this->_hitPoints > 0){

		std::cout << "ClapTrap " << this->_name << " attacks " << target << 
		" causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints -= 1;
	}
	else if (this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << 
		"has no hit point left!" << std::endl;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name <<  "has no energy left!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " takes " << amount << 
		" points of damage!" << std::endl;
		this->_hitPoints -= (amount);
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no hit points left." << std::endl;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints > 0 && this->_energyPoints){
		std::cout << "ClapTrap " << this->_name << " repairs itself, gaining " << 
		amount << " hit points!" << std::endl;
		this->_hitPoints += (amount);
		this->_energyPoints -= 1;
	}
	if (this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << 
		" is already dead, cannot repair!" << std::endl;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " has no energy left!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other){
	if (this != &other){
		std::cout << "Copy assignment ClapTrap called." << std::endl;
		this->_name = other.getName();
		this->_hitPoints = other.getHitPoints();
		this->_energyPoints = other.getEnergyPoints();
		this->_attackDamage = other.getAttack();
	}
	return (*this);
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