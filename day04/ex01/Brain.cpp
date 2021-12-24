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

Brain::Brain(std::string *ideas) 
{
	std::cout << "Brain Ideas constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas[i];
	}
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

std::string	*Brain::getIdeas()
{
	return (this->ideas);
}