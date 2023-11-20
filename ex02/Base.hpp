#include <iostream>
#include <ctime>
#include <cstdlib>

class Base {
public:
    virtual ~Base() = default;
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

class ObjectIdentifier {
public:
    static Base* generate();
    static void identify(Base* p);
    static void identify(Base& p);
};