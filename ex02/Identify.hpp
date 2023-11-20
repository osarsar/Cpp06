#pragma once

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class ObjectIdentifier 
{
    public:
        static Base* generate();
        static void identify(Base* p);
        static void identify(Base& p);
};