#include "Serializer.hpp"

Data::Data()
{
    std::cout << "Data: Constructor called" << std::endl;
}

Data::~Data()
{
    std::cout << "Data: Destructor called" << std::endl;
}

Data::Data(Data const& obj)
{
    std::cout << "Data: Copy constructor called" << std::endl;
    *this = obj;
}

Data& Data::operator=(Data const& obj)
{
    (void)obj;
    std::cout << "Data: Copy asignement operator called" << std::endl;
    return (*this);
}

Data::Data(int data)
{
    this->data = data;
    std::cout << "Data: Setter constructor called" << std::endl;
}

int Data::getdata() const
{
    return (this->data);
}
