#include "../include/Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain Constructor called!" << std::endl;
}

Brain::~Brain(void){
    std::cout << "Brain Destructor called!" << std::endl;
}

Brain::Brain(const Brain &other){
    *this = other;
}

Brain   &Brain::operator=(const Brain &other){
    if (this != &other){
        std::cout << "Brain Assignment called!" << std::endl;
        for (int i = 0; i < 100; i++){
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

void    Brain::setIdea(const std::string &idea, const int &index){
    if (index >= 0 && index < 100){
        this->ideas[index] = idea;
    }
    else
        std::cout << "Incorrect index from Brain!" << std::endl;
}

std::string Brain::getIdea(const int &index){
    if (index >= 0 && index < 100){
        return (this->ideas[index]);
    }
    else
        return ("Incorrect index!\n"); 
}