/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:49 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/27 09:37:45 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("", 145, 137)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137), Target(target)
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other)
{
    *this = other;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    this->Target = other.Target;
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream file;
    if (executor.getGrade() <= 137)
    {
        file.open(this->Target + "_shrubbery");
        file << "          .     .  .      +     .      .          ." << std::endl;
        file << "      .       .      .     #       .           ." << std::endl;
        file << "         .      .         ###            .      .      ." << std::endl;
        file << "       .      .   \"#:. .:##\"##:. .:#\"  .      ." << std::endl;
        file << "           .      . \"####\"###\"####\"  ." << std::endl;
        file << "        .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       ." << std::endl;
        file << "   .             \"#########\"#########\"        .        ." << std::endl;
        file << "         .    \"#:.  \"####\"###\"####\"  .:#\"   .       ." << std::endl;
        file << "     .     .  \"#######\"\"##\"##\"\"#######\"                  ." << std::endl;
        file << "                .\"##\"#####\"#####\"##\"           .      ." << std::endl;
        file << "    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     ." << std::endl;
        file << "       .     \"#######\"##\"#####\"##\"#######\"      .     ." << std::endl;
        file << "     .    .     \"#####\"\"#######\"\"#####\"    .      ." << std::endl;
        file << "            .     \"      000      \"    .     ." << std::endl;
        file << "       .         .   .   000     .        .       ." << std::endl;
        file << ".. .. ..................O000O........................ ...... ..." << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
