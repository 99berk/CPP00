#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    private:
        Contact contact[8];
        int index;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void add(void);
        void clear(void);
        void search(void);
        std::string addSpaces(int n);
        void updateInput(std::string str);
        void print(int index);
};

#endif