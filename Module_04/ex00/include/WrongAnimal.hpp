#pragma once
#include <string>
#include <iostream>

class WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &other);
        ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &other);
        void        makeSound(void);
        std::string getType(void);
};