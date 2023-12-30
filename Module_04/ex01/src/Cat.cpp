#include "../include/Cat.hpp"

Cat::Cat(void) : Animal(){
    this->_type = "Cat";
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e){
        std::cout << "Cat Memory Allocation is failed!"<< std::endl;
        std::exit(1);
    }
    std::cout << "Default Cat Constructor called!" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other){
    *this = other;
    std::cout << "Copy Cat Constructor called!" << std::endl;
}

Cat::Cat(std::string newType) : Animal(newType){
    try {
        this->_brain = new Brain();
    }
    catch (const std::bad_alloc& e){
        std::cout << "Cat Memory Allocation is failed!"<< std::endl;
        exit(1);
    }
    std::cout << "Parameterized Cat Constructor called!" << std::endl;
}

Cat::~Cat(void){
    delete this->_brain;
    std::cout << "Cat Destructor called!" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    if (this != &other){
        std::cout << "Assignment Cat Operator called!" << std::endl;
        this->_type = other._type;
        *(this->_brain) = *(other._brain);
		Animal::operator=(other);
    }
    return (*this);
}

void    Cat::makeSound(void) const{
    std::cout << "Cat " << getType() << " Miaw Miaw" << std::endl;
}

Brain   *Cat::getBrain(void) const{
    return (this->_brain);
}

void    Cat::setIdea(const std::string &idea,const int &index){
    if (index >= 0 && index < 100){
        std::cout << "At index: " << index << std::endl;
        std::cout << "The idea: " << idea << std::endl;
        getBrain()->setIdea(idea, index);
    }
    else
        std::cout << "Inconrrect index from Cat!" << std::endl;
}

std::string Cat::getIdea(const int &index){
    return (this->getBrain()->getIdea(index));
}