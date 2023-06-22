/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:32 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/23 10:55:13 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
// #include"Form.hpp"

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
// void Bureaucrat::signForm(Form &obj){
//     try{
//         obj.beSigned(*this);
//     }catch(std::exception &ex){
//         std::cout << this->name << " couldn't sign " << obj.getname()<<" because " << ex.what() <<std::endl;
//     }
//     if (obj.getsign())
//         std::cout << this->name << " signed " << obj.getname()<<std::endl;
// };