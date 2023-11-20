#include "Serialization.hpp"


int main() {

    Data* obj = new Data(42, 13.37);
    uintptr_t serialized_obj = Serializer::serialize(obj);
    Data* deserialized_obj = Serializer::deserialize(serialized_obj);

    if (deserialized_obj == obj) 
    {
        std::cout << "Serialization and Deserialization are equal." << std::endl;
        std::cout << "Original Data: " << obj->get_data1() << ", " << obj->get_data2() << std::endl;
    } 
    else 
        std::cerr << "Serialization and Deserialization are different." << std::endl;

    delete obj;

    return 0;
}
