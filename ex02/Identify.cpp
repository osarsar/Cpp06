#include "Identify.hpp"

Identifier::Identifier()
{
    std::cout << "Identifier: Constructor called" << std::endl;
}

Identifier::~Identifier()
{
    std::cout << "Identifier: Destructor called" << std::endl;
}

Identifier::Identifier(Identifier const& obj)
{
    std::cout << "Identifier: Copy constructor called" << std::endl;
    *this = obj;
}

Identifier& Identifier::operator=(Identifier const& obj)
{
    (void)obj;
    std::cout << "Identifier: Copy asignement operator called" << std::endl;
    return (*this);
}

Base* Identifier::generate() 
{
    std::srand((std::time(NULL)));
    int random = rand() % 3;
    std::cout << random << std::endl;
    switch (random)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return 0;
    }
}

void Identifier::identify(Base* p) 
{
    if (dynamic_cast<A*>(p))              //Why
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "ERROR" << std::endl;
}

void Identifier::identify(Base& p) 
{
    try
    {
        if (dynamic_cast<A*>(&p))
            std::cout << "A" << std::endl;
        else
            throw std::exception();

    }
    catch (std::exception &e){}
    try
    {
        if (dynamic_cast<B*>(&p))
            std::cout << "B" << std::endl;
        else
            throw std::exception();

    }
    catch (std::exception &e){}
    try
    {
        if (dynamic_cast<C*>(&p))
            std::cout << "C" << std::endl;
        else
            throw std::exception();

    }
    catch (std::exception &e){}

    std::cout << "--ERROR--" << std::endl;
}