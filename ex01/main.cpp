#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
    std::string input;
    PhoneBook book;

    book.clear();
    do
    {
        input = "";
        std::cout << "Command Waiting (ADD, SEARCH, EXIT):" << std::endl;
        std::getline(std::cin, input);
        if (input == "ADD")
            book.add();
        if (input == "SEARCH")
            book.search();
        if (std::cin.eof())
			return (std::cout << std::endl, 0);
    } while (input != "EXIT");
    return (0);
}