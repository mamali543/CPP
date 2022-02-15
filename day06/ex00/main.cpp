#include "convert.hpp"

int main(int    argc, char **argv)
{
    argc = 0;
    convert a(argv[1]);
    std::cout << a << std::endl;
    return (0);
}