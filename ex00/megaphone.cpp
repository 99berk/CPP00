#include <iostream>

int main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    i = 0;
    while (av[++i])
    {
        j = -1;
        while (av[i][++j])
            std::cout << (char)std::toupper(av[i][j]);
    }
    return (std::cout << std::endl, 0);
}