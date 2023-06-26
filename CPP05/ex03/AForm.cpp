/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 17:41:00 by mel-hous         ###   ########.fr       */
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
AForm::AForm(std::string Name, bool Sign, int gradetoexecute, int gradetosign) : name(Name), GradeToSign(gradetosign), GradeToExecute(gradetoexecute)
{
    this->_signed = Sign;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

AForm &AForm::operator=(const AForm &other)
{
    (void)other;
    return *this;
}
std::ostream &operator<<(std::ostream &out, AForm &br)
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
/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

AForm::~AForm()
{
}