#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook()
{
    this->index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::clear(void)
{
    std::cout << "\033[2J";
	std::cout << "\033[H";
    std::cout << "---------------------------------------------\n";
    std::cout << "|            -P-H-O-N-E-B-O-O-K-            |\n";
    std::cout << "---------------------------------------------\n";
    std::cin.clear();
}

void PhoneBook::add()
{
    std::string str;
    int index;

    this->clear();
    if (this->index == 16)
        this->index = 8;
    index = this->index % 8;
    if (this->index > 7)
        std::cout << "Book is full 8/8. Override: " << index + 1 << "/8"<< std::endl;
    do
    {
        std::cout << "First Name    : ";
        std::getline(std::cin, str);
        if (this->contact[index % 8].setFname(str))
            break;
    } while (!std::cin.eof() && str == "");
    str = "";
    do
    {
        std::cout << "Last Name     : ";
        std::getline(std::cin, str);
        if (this->contact[index % 8].setLname(str))
            break;
    } while (!std::cin.eof() && str == "");
    str = "";
    do
    {
        std::cout << "Nick Name     : ";
        std::getline(std::cin, str);
        if (this->contact[index % 8].setNickname(str))
            break;
    } while (!std::cin.eof() && str == "");
    str = "";
    do
    {
        std::cout << "Phone number  : ";
        std::getline(std::cin, str);
        if (this->contact[index % 8].setPhonenumber(str))
            break;
    } while (!std::cin.eof() && str == "");
    str = "";
    do
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, str);
        if (this->contact[index % 8].setSecret(str))
            break;
    } while (!std::cin.eof() && str == "");
    this->clear();
    this->index++;
    std::cout << "Contact created " << index + 1 << "/8" << std::endl;
}

std::string PhoneBook::addSpaces(int n)
{
    std::string str;

	while (n--)
		str.append(" ");
	return (str);
}

void PhoneBook::updateInput(std::string str)
{
    int	size;
	int	i;

	size = str.size();
	if (size < 10)
		std::cout << this->addSpaces(10 - size) << str;
	else
	{
		i = -1;
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
}

void	PhoneBook::print(int index)
{
	this->clear();
	std::cout << "First name    : ";
	std::cout << this->contact[index].getFname() << std::endl;
	std::cout << "Last name     : ";
	std::cout << this->contact[index].getLname() << std::endl;
	std::cout << "Nickname      : ";
	std::cout << this->contact[index].getNickname() << std::endl;
	std::cout << "Phone number  : ";
	std::cout << this->contact[index].getPhonenumber() << std::endl;
	std::cout << "Darkest secret: ";
	std::cout << this->contact[index].getSecret() << std::endl;
}

void PhoneBook::search()
{
    int i;
    std::string input;

    this->clear();
    if (this->index == 0)
    {
        std::cout << "There is no contact." << std::endl;
        return;
    }
    std::cout << "|     Index|      Name|  Lastname|  Nickname|" << std::endl;
	std::cout << "|-+-+-+-+-+|-+-+-+-+-+|-+-+-+-+-+|-+-+-+-+-+|" << std::endl;
    i = -1;
    while (++i != 8 && this->contact[i].getFname() != "" && this->contact[i].getFname() != "NULL")
    {
        std::cout << "|" << this->addSpaces(9) << i + 1 << "|";
        this->updateInput(this->contact[i].getFname());
        std::cout << "|";
        this->updateInput(this->contact[i].getLname());
		std::cout << "|";
		this->updateInput(this->contact[i].getNickname());
		std::cout << "|" << std::endl;
        if (i + 1 != 8 && this->contact[i + 1].getFname() != "")
            std::cout << "|~~~~~~~~~~|~~~~~~~~~~|~~~~~~~~~~|~~~~~~~~~~|" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
	input = "";
	std::cin.clear();
	while (!std::cin.eof() && input == "")
	{
		std::cout << "Select index: ";
		std::getline(std::cin, input);
		if (input.size() == 1 && input[0] >= '1' && input[0] <= '8'
			&& this->contact[input[0] - 1 - '0'].getFname() != "")
				this->print(input[0] - 1 - '0');
		else
		{
			input = "";
			std::cout << "Wrong index!" << std::endl;
		}
	}
}