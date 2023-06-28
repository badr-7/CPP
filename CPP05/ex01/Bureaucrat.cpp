/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:14 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 14:43:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

Bureaucrat::Bureaucrat() : name("default"), grade(150)
{
}
Bureaucrat::Bureaucrat(Bureaucrat &other)
{
    *this = other;
}
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name)
{
    this->grade = Grade;
    if (this->grade < 1)
        throw GradeTooHighException();
    if (this->grade > 150)
        throw GradeTooLowException();
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    this->grade = other.grade;
    return *this;
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &Obj)
{
    out << Obj.getName() << ", bureaucrat grade " << Obj.getGrade() << std::endl;
    return out;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

std::string Bureaucrat::getName() const
{
    return this->name;
}
int Bureaucrat::getGrade() const
{
    return this->grade;
}

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void Bureaucrat::IncrementGrade()
{
    this->grade--;
    if (this->grade < 1)
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{
    this->grade++;
    if (this->grade > 150)
        throw GradeTooLowException();
}
void Bureaucrat::signForm(Form &obj)
{
    try
    {
        obj.beSigned(*this);
        std::cout << this->name << " signed " << obj.getname() << std::endl;
    }
    catch (std::exception &ex)
    {
        std::cout << this->name << " couldn't sign " << obj.getname() << " because " << ex.what() << std::endl;
    }
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade To High");
}
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade To Low");
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Bureaucrat::~Bureaucrat()
{
}