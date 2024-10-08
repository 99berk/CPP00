#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
    std::string input;
    PhoneBook book;

    do
    {
        input = "";
        std::cout << "?" << std::endl;
        std::getline(std::cin, input);
        //if (input == "ADD")

        //if (input == "SEARCH")

    } while (input != "EXIT");
}