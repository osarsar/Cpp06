#include "Serialization.hpp"

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

Data::Data(int d1, double d2)
{
    this->data1 = d1;
    this->data2 = d2;
    std::cout << "Data: Constructor with two parameters called" << std::endl;
}

int Data::get_data1()
{
    return (this->data1);
}

double Data::get_data2()
{
    return (this->data2);
}

uintptr_t Serializer::serialize(Data* ptr) 
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) 
{
    return reinterpret_cast<Data*>(raw);
}
