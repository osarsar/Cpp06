#include "Identify.hpp"


int main() 
{
    Base* obj;
    
    obj = Identifier::generate();
    Identifier::identify(obj);
    Identifier::identify(*obj);

    delete obj;

    return 0;
}

//void identify(Base& p);
//It prints the actual type of the object pointed to by p: "A", "B" or "C". Using a pointer
//inside this function is forbidden.