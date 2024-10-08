#include "Contact.hpp"

Contact::Contact(void)
{
    this->_fname = "NULL";
    this->_lname = "NULL";
    this->_nickname = "NULL";
    this->_phoneNumber = "NULL";
    this->_secret = "NULL";
}

Contact::~Contact()
{
}

void Contact::setFname(std::string fname)
{
    this->_fname = fname;
}

void Contact::setLname(std::string lname)
{
    this->_lname = lname;
}

void Contact::setNickname(std::string nickname)
{
    this->_nickname = nickname;
}

void Contact::setPhonenumber(std::string phonenumber)
{
    this->_phoneNumber = phonenumber;
}

void Contact::setSecret(std::string secret)
{
    this->_secret = secret;
}

std::string Contact::getFname(void)
{
    return (this->_fname);
}

std::string Contact::setLname(void)
{
    return (this->_lname);
}

std::string Contact::setNickname(void)
{
    return (this->_nickname);
}

std::string Contact::setPhonenumber(void)
{
    return (this->_phoneNumber);
}

std::string Contact::setSecret(void)
{
    return (this->_secret);
}
