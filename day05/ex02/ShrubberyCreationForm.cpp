#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string   target) : Form("ShrubberyCreationForm", target, 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm deconstructor called\n";
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
	}
	return *this;
}

// ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & old_object)
// {
//     std::cout << "Shrubbery coppy constructor called\n";
//     this->operator=(old_object);
// }

std::ostream &			operator<<( std::ostream & o, const ShrubberyCreationForm & Shrubbery )
{
	if (Shrubbery.getIsigned())
		o << Shrubbery.getName() << " is signed";
	else
		o << Shrubbery.getName() << " is not signed";
	return o;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getgradeTexecute() < executor.getGrade())
        throw GradeTooLowException();
    else if (this->getIsigned() == 0)
        throw NotSignedException();
    else
    {
        std::ofstream file(this->getTarget()+"_shrubbery");

        file << "              v .   ._, |_  .,\n";
        file << "           `-._/  .   /    |/_\n";
        file << "               \\  _, y | //\n";
        file << "       __.___\\, \\/ -.||\n";
        file << "           `7-,--.`._||  / / ,\n";
        file << "           /'     `-. `./ / |/_.'\n";
        file << "                     |    |//\n";
        file << "                     |__    /\n";
        file << "                     |-   |\n";
        file << "                     |   =|\n";
        file << "                     |    |\n";
        file << "--------------------/ ,  . \\--------._\n";
        file << "	 ------------------------------       \n";

        file.close();
    }
}