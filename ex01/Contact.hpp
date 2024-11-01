#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

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
        bool setFname(std::string fname);
        bool setLname(std::string lname);
        bool setNickname(std::string nickname);
        bool setPhonenumber(std::string phonenumber);
        bool setSecret(std::string secret);
        std::string getFname(void);
        std::string getLname(void);
        std::string getNickname(void);
        std::string getPhonenumber(void);
        std::string getSecret(void);
};

#endif