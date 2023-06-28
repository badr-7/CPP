/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:40 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 15:24:20 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

PresidentialPardonForm::PresidentialPardonForm() : AForm("", 25, 5)
{
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other)
{
    *this = other;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5), Target(target)
{
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    this->Target = other.Target;
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (this->getsign() && executor.getGrade() <= 5)
        std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    else
        throw AForm::CanNotExecuteException();
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

PresidentialPardonForm::~PresidentialPardonForm()
{
}
