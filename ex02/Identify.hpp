#pragma once

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Identifier 
{
    public:
        Identifier();
        ~Identifier();
        Identifier(Identifier const& obj);
        Identifier& operator=(Identifier const& obj);

        static Base* generate();
        static void identify(Base* p);
        static void identify(Base& p);
};