#include "../include/WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
    this->_type = "WrongCat";
    std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(){
    *this = other;
    std:: cout << "WrongAninmal Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other){
    if (this != &other){
        std::cout << "WrongCat Assignment called" << std::endl;
        this->getType() = other.getType();
        WrongAnimal::operator=(other);
    }
    return (*this);
}

void    WrongCat::makeSound(void) const{
    std::cout << this->getType() << " WrongCatllllllll" << std::endl;
}
