/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:14 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/24 08:40:48 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default") , grade(150)
{}
Bureaucrat::~Bureaucrat(){
    
}
Bureaucrat::Bureaucrat(Bureaucrat& other){
    *this = other;
}
Bureaucrat::Bureaucrat(std::string Name, int Grade) : name(Name){
    this->grade = Grade;
    if(this->grade < 1)
        throw GradeTooHighException();
    if(this->grade > 150)
        throw GradeTooLowException();
}

std::string Bureaucrat::getName(){
    return this->name;
}

int Bureaucrat::getGrade(){
    return this->grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other){
    this->grade = other.grade;
    return *this;
}

void Bureaucrat::IncrementGrade(){
    this->grade--;
    if(this->grade < 1)
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade(){
    this->grade++;
    if(this->grade > 150)
        throw GradeTooLowException();
}

std::ostream&   operator<<(std::ostream &out,  Bureaucrat &Obj){
    out << Obj.getName() << ", bureaucrat grade " << Obj.getGrade() << std::endl ;
    return out;
}