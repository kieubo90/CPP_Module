#include "../include/Animal.hpp"

Animal::Animal(): _type("default"){
    std::cout << "Dedault Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &other){
    *this = other;
    std::cout << "Copy Animal Constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Destructor Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    if (this != &other){
        this->_type = other._type;
        std::cout << "Assignment Animal called" << std::endl;
    }
    return (*this);
}

void    Animal::makeSound(void) const{
    std::cout << "Animal " << getType() << " does not make sound" << std::endl;
}

std::string Animal::getType(void) const{
    return (this->_type);
}