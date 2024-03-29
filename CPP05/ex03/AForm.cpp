/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 15:24:28 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

AForm::AForm() : name("default"), GradeToSign(150), GradeToExecute(150)
{
    this->_signed = false;
}
AForm::AForm(AForm &other) : name(other.name), GradeToSign(other.GradeToSign), GradeToExecute(other.GradeToExecute)
{
    this->_signed = other._signed;
}
AForm::AForm(std::string Name, int gradetosign ,int gradetoexecute) : name(Name), GradeToSign(gradetosign), GradeToExecute(gradetoexecute)
{
    this->_signed = false;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

AForm &AForm::operator=(const AForm &other)
{
    (void)other;
    return *this;
}
std::ostream &operator<<(std::ostream &out, const AForm &br)
{
    out << br.getname() << ",  sign " << br.getsign() << ", Sign Grade " << br.getGradetosign() << ", Execute Grade " << br.getGradetoexecute() << std::endl;
    return out;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

std::string AForm::getname() const
{
    return this->name;
}
bool AForm::getsign() const
{
    return this->_signed;
}
int AForm::getGradetosign() const
{
    return this->GradeToSign;
}
int AForm::getGradetoexecute() const
{
    return this->GradeToExecute;
}

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void AForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->GradeToSign)
        this->_signed = true;
    else
        throw GradeTooLowException();
}
const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade To High");
}
const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade To Low");
}
const char *AForm::CanNotExecuteException::what() const throw()
{
    return ("Can't execute");
}
/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

AForm::~AForm()
{
}