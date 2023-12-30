#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "Brain.hpp"

class Animal{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &other);
        Animal(std::string newType);
        virtual ~Animal();

		Animal &operator=(const Animal &other);
		
        virtual void	        makeSound(void) const;
		virtual void            setType(std::string newType);
        virtual void            setIdea(const std::string &idea, const int &index);
		virtual std::string		getIdea(const int &index);
        virtual std::string		getType(void) const;
};