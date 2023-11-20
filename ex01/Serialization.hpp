#include <iostream>
#include <cstdint>

class Data
{
    private:
        int data1;
        double data2;

    public:
        Data();
        ~Data();
        Data(Data const& obj);
        Data& operator=(Data const& obj);
        Data(int d1, double d2);
        int get_data1();
        double get_data2();
};

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

