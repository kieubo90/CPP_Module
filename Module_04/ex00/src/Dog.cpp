#include "../include/Dog.hpp"

Dog::Dog(): Animal(){
    this->_type = "Dog";
    std::cout << "Dedault Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(){
    *this = other;
    std::cout << "Copy Dog Constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Destructor Dog called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    if (this != &other){
        this->_type = other._type;
        std::cout << "Assignment Dog called" << std::endl;
    }
    return (*this);
}

void    Dog::makeSound(void) const{
    std::cout << this->getType() << " Woof Woof" << std::endl;
}