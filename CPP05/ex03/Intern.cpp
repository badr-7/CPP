/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:36:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/27 16:01:59 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
    (void)other;
    return *this;
}

Intern::Intern(const Intern &other)
{
    *this = other;
}


AForm *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string names[3] = {"PresidentialPardon", "ShrubberyCreation", "RobotomyRequest"};
    AForm *ptr;
    for (i = 0; i < 3; i++)
        if (name.compare(names[i]) == 0)
            break;
    switch (i)
    {
    case 0:
        std::cout << "Intern creates " << names[i] << std::endl;
        ptr = new PresidentialPardonForm(target);
        return (ptr);
    case 1:
        std::cout << "Intern creates " << names[i] << std::endl;
        ptr = new ShrubberyCreationForm(target);
        return (ptr);
    case 2:
        std::cout << "Intern creates " << names[i] << std::endl;
        ptr = new RobotomyRequestForm(target);
        return (ptr);
    default:
        std::cout << "No Form with this name!!" << std::endl;
    }
    return 0;
}

Intern::~Intern()
{
}
