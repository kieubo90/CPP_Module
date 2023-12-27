#include "../include/Cat.hpp"

Cat::Cat(): Animal(){
    this->_type = "Cat";
    std::cout << "Dedault Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(){
    *this = other;
    std::cout << "Copy Cat Constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Destructor Cat called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other){
        this->_type = other._type;
        std::cout << "Assignment Cat called" << std::endl;
    }
    return (*this);
}

void    Cat::makeSound(void) const{
    std::cout << this->getType() << " Miaw Miaw" << std::endl;
}
