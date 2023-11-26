#pragma once

#include "Data.hpp"


class Serializer
{
    public:

        Serializer();
        ~Serializer();
        Serializer(Serializer const& obj);
        Serializer& operator=(Serializer const& obj);
        
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};
