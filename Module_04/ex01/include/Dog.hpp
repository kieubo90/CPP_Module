#pragma once
#include "Animal.hpp"

class Dog: public Animal{
    private:
        Brain   *_brain;
    public:
        Dog(void);
        Dog(const Dog &other);
        Dog(std::string newType);
        ~Dog(void);

        Dog &operator=(const Dog &other);
        void    makeSound(void) const;
        Brain   *getBrain(void) const;
        void	        setIdea(const std::string &idea, const int &index);
        std::string     getIdea(int const &index);
};