#pragma once
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat(void);
        WrongCat(const WrongCat &other);
        WrongCat(std::string newType);
        ~WrongCat(void);

        void    makeSound(void) const;
};