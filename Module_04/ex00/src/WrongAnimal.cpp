#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongDefault"){
    std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
    *this = other;
    std:: cout << "WrongAninmal Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    if (this != &other){
        std::cout << "WrongAnimal Assignment called" << std::endl;
        this->_type = other._type;
    }
    return (*this);
}

void    WrongAnimal::makeSound(void){
    std::cout << this->_type << " WrongAnimalllllllll" << std::endl;
}

std::string WrongAnimal::getType(void){
    return (this->_type);
}
