/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:36:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 17:53:53 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &other)
{
     *this = other;
}
 
Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

AForm* Intern::makeFormShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm* Intern::makeFormRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm* Intern::makeFormPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm*    Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string names[3] = {"presidential pardon","robotomy request","shrubbery creation"};
    INTERNPTR Intern[3] = {
        &Intern::makeFormPresidentialPardonForm,
        &Intern::makeFormRobotomyRequestForm,
        &Intern::makeFormShrubberyCreationForm,
    };
    for(i = 0; i < 3; i++)
        if (name.compare(names[i]) == 0)
            break ;
    switch(i)
    {
        case 0:
            return (this->*(Intern[i]))(target);
        case 1:
            return (this->*(Intern[i]))(target);
        case 2:
            return (this->*(Intern[i]))(target);
        default :
            std::cout << "No Form with this name!!" << std::endl;
    }
    throw AForm::GradeTooLowException();
    return 0;
}

Intern::~Intern()
{}
