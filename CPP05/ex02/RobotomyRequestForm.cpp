/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:44 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 15:24:40 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

RobotomyRequestForm::RobotomyRequestForm() : AForm("", 72, 45)
{
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &other)
{
    *this = other;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45), Target(target)
{
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    this->Target = other.Target;
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (this->getsign() && executor.getGrade() <= 45)
    {
        if (rand() % 2)
            std::cout << this->Target << " has been robotomized successfull" << std::endl;
        else
            std::cout << this->Target << " has been failed to robotomized" << std::endl;
    }
    else
        throw AForm::CanNotExecuteException();
}
/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

RobotomyRequestForm::~RobotomyRequestForm()
{
}
