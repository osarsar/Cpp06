#pragma once

#include <iostream>
#include <cstdint>

class Data
{
    private:
        int data;

    public:
        Data();
        ~Data();
        Data(Data const& obj);
        Data& operator=(Data const& obj);
        Data(int data);
        int getdata() const;
};
