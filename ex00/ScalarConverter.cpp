#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter: Constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter: Destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter & obj) 
{
    std::cout << "ScalarConverter: Copy constructor called" << std::endl;
    *this = obj;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter & obj)
{
    (void)obj;
    std::cout << "ScalarConverter: assignement operator called" << std::endl;
    return (*this);
}

void ScalarConverter::convert(std::string input) 
{
    //---------------------- Convert to char ----------------------//
    try 
    {
        char char_nbr = std::stoi(input);

        if (isprint(char_nbr)) 
            std::cout << "char: '" << char_nbr << "'" << std::endl;
        else 
            std::cerr << "char: Non displayable" << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "char: impossible" << std::endl;
    }

    //---------------------- Convert to int ----------------------//
    try 
    {
        int int_nbr = std::stoi(input);

        std::cout << "int: " << int_nbr << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "int: impossible" << std::endl;
    }

    //----------------------  Convert to float ----------------------//
    try 
    {
        size_t pos;
        float float_nbr = std::stof(input, &pos);

        if (pos == input.size()) 
            std::cout << "float: " << float_nbr << "f" << std::endl;
        else 
            std::cerr << "float: impossible" << std::endl;
    } 
    catch (const std::invalid_argument& e)
    {
        std::cerr << "float: impossible" << std::endl;
    }

    //----------------------  Convert to double ----------------------//
    try 
    {
        size_t pos;
        double double_nbr = std::stod(input, &pos);

        if (pos == input.size()) 
            std::cout << "double: " << double_nbr << std::endl;
        else 
            std::cerr << "double: impossible" << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cerr << "double: impossible" << std::endl;
    }
}
