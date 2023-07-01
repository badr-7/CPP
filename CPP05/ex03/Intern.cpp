/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:36:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 15:57:02 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
    *this = other;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

AForm *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string names[3] = {"Presidential Pardon", "Shrubbery Creation", "Robotomy Request"};
    for (i = 0; i < 3; i++)
        if (name.compare(names[i]) == 0)
            break;
    switch (i)
    {
    case 0:
        std::cout << "Intern creates " << names[i] << std::endl;
        return (new PresidentialPardonForm(target));
    case 1:
        std::cout << "Intern creates " << names[i] << std::endl;
        return (new ShrubberyCreationForm(target));
    case 2:
        std::cout << "Intern creates " << names[i] << std::endl;
        return (new RobotomyRequestForm(target));
    default:
        std::cout << "No Form with this name!!" << std::endl;
    }
    return 0;
}
/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Intern::~Intern()
{
}
