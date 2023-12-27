#pragma once
#include <iostream>
#include <string>

class Animal{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &other);
        virtual ~Animal();

        Animal &operator=(const Animal &other);
        virtual void        makeSound(void) const;
        std::string getType(void) const;
};