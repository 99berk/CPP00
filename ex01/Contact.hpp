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
        ~Contact();
        void setFname(std::string fname);
        void setLname(std::string lname);
        void setNickname(std::string nickname);
        void setPhonenumber(std::string phonenumber);
        void setSecret(std::string secret);
        std::string getFname(void);
        std::string setLname(void);
        std::string setNickname(void);
        std::string setPhonenumber(void);
        std::string setSecret(void);
};

#endif