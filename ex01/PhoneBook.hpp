#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contact[8];
public:
    PhoneBook(void);
    ~PhoneBook();
    //void add();
    //void search();
};

#endif