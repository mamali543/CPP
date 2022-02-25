#include "easyfind.hpp"

int main()
{
	std::vector<int> v;

	v.push_back(564);
	v.push_back(6465);
	v.push_back(34534);
	v.push_back(245);
	v.push_back(1337);
	v.push_back(24);

	try
	{
		easyfind(v, 1337);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------------------------------" << std::endl;
	try
	{
		easyfind(v, 42);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}