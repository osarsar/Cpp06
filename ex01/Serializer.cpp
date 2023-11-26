#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer: Constructor called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Serializer: Constructor called" << std::endl;
}

Serializer::Serializer(Serializer const& obj)
{
    std::cout << "Serializer: Copy constructor called" << std::endl;
    *this = obj;
}

Serializer& Serializer::operator=(Serializer const& obj)
{
    (void)obj;
    std::cout << "Serializer: assignement operator called" << std::endl;
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) 
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) 
{
    return (reinterpret_cast<Data*>(raw));
}
