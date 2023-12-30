#pragma once
#include <iostream>
#include <string>

class WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &other);
        ~WrongAnimal(void);

        WrongAnimal &operator=(const WrongAnimal &other);
        virtual void        makeSound() const;
        std::string getType() const;
};