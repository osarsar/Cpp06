#include "Identify.hpp"


int main() 
{
    Base* obj;
    
    obj = ObjectIdentifier::generate();
    ObjectIdentifier::identify(obj);
    ObjectIdentifier::identify(*obj);

    delete obj;

    return 0;
}