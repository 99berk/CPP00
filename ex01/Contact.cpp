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

bool Contact::setFname(const std::string fname)
{
    if (fname.empty())
    {
        std::cout << "First Name Empty!" << std::endl;
        return (false);
    }
    this->_fname = fname;
    return(true);
}

bool Contact::setLname(const std::string lname)
{
    if (lname.empty())
    {
        std::cout << "Last Name Empty!" << std::endl;
        return (false);
    }
    this->_lname = lname;
    return (true);
}

bool Contact::setNickname(const std::string nickname)
{
    if (nickname.empty())
    {
        std::cout << "Nick Name Empty!" << std::endl;
        return (false);
    }
    this->_nickname = nickname;
    return (true);
}

bool Contact::setPhonenumber(const std::string phonenumber)
{
    if (phonenumber.empty())
    {
        std::cout << "Phone Number Empty!" << std::endl;
        return (false);
    }
    this->_phoneNumber = phonenumber;
    return (true);
}

bool Contact::setSecret(const std::string secret)
{
    if (secret.empty())
    {
        std::cout << "Darkest Secret Empty!" << std::endl;
        return (false);
    }
    this->_secret = secret;
    return (true);
}

std::string Contact::getFname(void) const
{
    return (this->_fname);
}

std::string Contact::getLname(void) const
{
    return (this->_lname);
}

std::string Contact::getNickname(void) const
{
    return (this->_nickname);
}

std::string Contact::getPhonenumber(void) const
{
    return (this->_phoneNumber);
}

std::string Contact::getSecret(void) const
{
    return (this->_secret);
}
