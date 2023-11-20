#include "ScalarConverter.hpp"



int main(int ac, char **av)
{
    if (av[1] && ac == 2)
        ScalarConverter::convert(av[1]);
    else
        std::cout << "invalid argument" << std::endl;

    return 0;
}
