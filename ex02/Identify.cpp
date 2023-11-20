#include "Identify.hpp"


Base* ObjectIdentifier::generate() 
{
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int random = std::rand() % 3;

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

void ObjectIdentifier::identify(Base* p) 
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C" << std::endl;
    else
        std::cerr << "Unknown type" << std::endl;
}

void ObjectIdentifier::identify(Base& p) 
{
    identify(&p);
}