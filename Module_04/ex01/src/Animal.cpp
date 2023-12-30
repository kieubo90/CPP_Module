#include "../include/Animal.hpp"

Animal::Animal(void) : _type("default"){
	std::cout << "Dedault Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
	std::cout << "Copy Animal Constructor called" << std::endl;
	*this = other;
}

Animal::Animal(std::string newType) : _type(newType){
	std::cout << "Parameterized Animal Constructor called" << std::endl;
}

Animal::~Animal(void){
	std::cout << "Destructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
	if (this != &other){
		std::cout << "Assignment Animal called" << std::endl;
		this->_type = other._type;
	}
	return (*this);
}

void    Animal::makeSound(void) const {
	std::cout << "Animal " << getType() << " make sound" << std::endl;
}

std::string Animal::getType(void) const{
	return (this->_type);
}

void	Animal::setType(std::string newType){
	this->_type = newType;
}

std::string	Animal::getIdea(const int &index){
	if (index >= 0 && index < 100){
		return ("Index ok!\n");
	}
	else
		return ("Incorrect index!\n");
}

void	Animal::setIdea(const std::string &idea, const int &index){
	if (index >= 0 && index < 100){
		std::cout << "Correct index " << idea << std::endl;
	}
	else
		std::cout << "Incorrect index\n";
}
