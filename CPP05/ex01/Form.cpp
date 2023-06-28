/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:09:02 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 14:47:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

Form::Form() : name("default"), GradeToSign(150), GradeToExecute(150)
{
    this->_signed = false;
}
Form::Form(Form &other) : name(other.name), GradeToSign(other.GradeToSign), GradeToExecute(other.GradeToExecute)
{
    *this = other;
}
Form::Form(std::string Name, int gradetoexecute, int gradetosign) : name(Name), GradeToSign(gradetosign), GradeToExecute(gradetoexecute)
{
    this->_signed = false;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

Form &Form::operator=(const Form &other)
{
    (void)other;
    return *this;
}
std::ostream &operator<<(std::ostream &out, const Form &br)
{
    out << br.getname() << ",  sign " << br.getsign() << ", Sign Grade " << br.getGradetosign() << ", Execute Grade " << br.getGradetoexecute() << std::endl;
    return out;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

std::string Form::getname() const
{
    return this->name;
}
bool Form::getsign() const
{
    return this->_signed;
}
int Form::getGradetosign() const
{
    return this->GradeToSign;
}
int Form::getGradetoexecute() const
{
    return this->GradeToExecute;
}

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->GradeToSign)
        this->_signed = true;
    else
        throw GradeTooLowException();
}
const char *Form::GradeTooHighException::what() const throw()
{
    return ("Grade To High");
}
const char *Form::GradeTooLowException::what() const throw()
{
    return ("Grade To Low");
}
/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Form::~Form()
{
}