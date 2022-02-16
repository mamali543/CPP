#include "Serialization.hpp"

int main ()
{
    Data *test = new Data();
    Data  *test1= new Data();
    test->title = "mok";
    uintptr_t raw = serialize(test);
    std::cout << "raw = " << raw << std::endl;
    test1 = deserialize(raw);
    std::cout << "test1 title = " << test1->title << std::endl;

}