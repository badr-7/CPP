/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:44 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 17:34:17 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"


/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

RobotomyRequestForm::RobotomyRequestForm(){
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other){
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other){
}

/////////////////////////////////////////////////////////////////////[GETTERS]


/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(0));
    int a = rand();
    if(executor.getGrade() <= 72 && executor.getGrade() <= 45)
    {
        if(a % 2)
            std::cout << this->Target << " has been robotomized successfull" << std::endl;
        else
            std::cout << this->Target << " has been failed to robotomized" << std::endl;
    }
    else 
        throw AForm::GradeTooLowException();
}
/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

RobotomyRequestForm::~RobotomyRequestForm(){
}
