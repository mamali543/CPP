#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	this->operator=(src);

}

Brain::~Brain()
{
	std::cout << "Brain " << "Destructor" << std::endl;
}

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 100; i++)
		{

			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

void Brain::setideas(const std::string& str, int i)
{
	this->ideas[i] = str;
}

const std::string& Brain::getidea(int i) const
{
	return (this->ideas[i]);
}

