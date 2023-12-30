#pragma once
#include <string>
#include <iostream>

class Brain{
    private:
        std::string		ideas[100];
    public:
        Brain(void);
        Brain(const Brain &other);
        ~Brain(void);

        Brain &operator=(const Brain &other);
        
        void        setIdea(const std::string &other, const int &index);
        std::string getIdea(const int &index);
};
