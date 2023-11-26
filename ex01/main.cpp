#include "Serializer.hpp"

int main() 
{
    Serializer obj;
    Data* data = new Data(42);
    uintptr_t serialized_obj;
    Data* deserialized_obj;

    serialized_obj = obj.serialize(data);
    deserialized_obj = obj.deserialize(serialized_obj);

    std::cout << "data: " << data << std::endl;
    std::cout << "serialized_obj: " << serialized_obj << std::endl;
    std::cout << "deserialized_obj: " << deserialized_obj << std::endl;

    
    if (deserialized_obj == data) 
    {
        std::cout << "------------Success------------" << std::endl;
        std::cout << "Original Data: " << data->getdata() << std::endl;
    } 
    else 
        std::cerr << "------------Failed------------" << std::endl;

    delete data;

    return 0;
}

//DATA structure
//Do not forget to turn in the files of your Data structure.