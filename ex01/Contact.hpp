#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string _fname;
        std::string _lname;
        std::string _nickname;
        std::string _phoneNumber;
        std::string _secret;
    public:
        Contact(void);
        ~Contact(void);
        bool setFname(const std::string fname);
        bool setLname(const std::string lname);
        bool setNickname(const std::string nickname);
        bool setPhonenumber(const std::string phonenumber);
        bool setSecret(const std::string secret);
        std::string getFname(void) const;
        std::string getLname(void) const;
        std::string getNickname(void) const;
        std::string getPhonenumber(void) const;
        std::string getSecret(void) const;
};

#endif