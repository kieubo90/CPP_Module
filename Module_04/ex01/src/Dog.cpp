#include "../include/Dog.hpp"

Dog::Dog(void) : Animal(){
    this->_type = "Dog";
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& err) {
        std::cout << "Dog emory Allocation is failed!" << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog &other) : Animal(other){
    *this = other;
    std::cout << "Copy Dog Constructor called!" << std::endl;
}

Dog::Dog(std::string newType) : Animal(newType){
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& err) {
        std::cout << "Dog Memory Allocation is failed!" << std::endl;
		exit(1);
	}
    std::cout << "Parameterized Dog Constructor called!" << std::endl;
}

Dog::~Dog(void){
	delete this->_brain;
	std::cout << "Dog Destructor called!" << std::endl;
}

Dog	&Dog::operator=(const Dog &other){
	if (this != &other){
		std::cout << "Dog Assignment called!" << std::endl;
		this->_brain = new Brain(*other._brain);
		this->_type = other._type;
		Animal::operator=(other);
	}
	return (*this);
}

void	Dog::makeSound(void) const{
	std::cout << "Dog " << getType() << " Woof Woof!" << std::endl;
}

void	Dog::setIdea(const std::string &idea, int const &index){
	if (index >= 0 && index < 100){
		std::cout << "At index: " << index << std::endl;
		std::cout << "The idea: " << idea << " was set" << std::endl;
		getBrain()->setIdea(idea, index);
	}
	else
		std::cout << "Incorrect index from Dog!" << std::endl;
}

Brain	*Dog::getBrain(void) const{
	return (this->_brain);
}

std::string	Dog::getIdea(const int &index){
	return (this->getBrain()->getIdea(index));
}