#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
    this->_fname = "";
    this->_lname = "";
    this->_nickname = "";
    this->_phoneNumber = "";
    this->_secret = "";
}

Contact::~Contact()
{
}

bool Contact::setFname(std::string fname)
{
    if (fname.empty())
    {
        std::cout << "first name empty!" << std::endl;
        return (false);
    }
    this->_fname = fname;
    return(true);
}

bool Contact::setLname(std::string lname)
{
    if (lname.empty())
    {
        std::cout << "last name empty!" << std::endl;
        return (false);
    }
    this->_lname = lname;
    return (true);
}

bool Contact::setNickname(std::string nickname)
{
    if (nickname.empty())
    {
        std::cout << "nick name empty!" << std::endl;
        return (false);
    }
    this->_nickname = nickname;
    return (true);
}

bool Contact::setPhonenumber(std::string phonenumber)
{
    if (phonenumber.empty())
    {
        std::cout << "Phone number empty!" << std::endl;
        return (false);
    }
    this->_phoneNumber = phonenumber;
    return (true);
}

bool Contact::setSecret(std::string secret)
{
    if (secret.empty())
    {
        std::cout << "Darkest secret empty!" << std::endl;
        return (false);
    }
    this->_secret = secret;
    return (true);
}

std::string Contact::getFname(void)
{
    return (this->_fname);
}

std::string Contact::getLname(void)
{
    return (this->_lname);
}

std::string Contact::getNickname(void)
{
    return (this->_nickname);
}

std::string Contact::getPhonenumber(void)
{
    return (this->_phoneNumber);
}

std::string Contact::getSecret(void)
{
    return (this->_secret);
}
