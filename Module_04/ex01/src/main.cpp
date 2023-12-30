#include "../include/Animal.hpp"
#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main(void)
{
    const int   numberofAnimals = 10;
    Animal* animals[numberofAnimals];

    for (int i = 0; i < numberofAnimals / 2; i++){
        animals[i] = new Dog("Dog");
        animals[i + numberofAnimals / 2] = new Cat("Cat");
    }

    for (int i = 0; i < numberofAnimals; i++){
        for(int j = 0;j < 5; j++){
            std::stringstream ss;
            ss << animals[i]->getType() << " " << 
            (i >= 5 ? i - numberofAnimals / 2 + 1 : i + 1) << " idea " << j + 1;
            animals[i]->setIdea(ss.str(), j);
        }
    }

    for (int i = 0;i < numberofAnimals;i++){
        std::cout << "Ideas of: " << animals[i]->getType() << " " 
        << (i >= 5 ? i - numberofAnimals / 2 + 1 : i + 1) << ":" << std::endl; 
        for(int j = 0;j < 5;j++){
            std::cout << animals[i]->getIdea(j) << std::endl;
        }
    }

    for (int i = 0; i < numberofAnimals; i++){
        delete animals[i];
    }
    return (0);
}