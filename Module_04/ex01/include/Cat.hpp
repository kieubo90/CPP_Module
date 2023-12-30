#pragma once
#include "Animal.hpp"

class Cat: public Animal{
    private:
        Brain   *_brain;
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat(std::string newType);
        ~Cat(void);

        Cat &operator=(const Cat &other);
        void            makeSound(void) const;
        Brain           *getBrain(void) const;
        void            setIdea(const std::string &idea, const int &index);
        std::string     getIdea(const int &index);
};