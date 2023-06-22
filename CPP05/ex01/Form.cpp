/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:09:02 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/22 15:18:15 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

Form::Form() : GradeToExecute(150), GradeToSign(150), name("default"){
    this->_signed = false;
}
Form::Form(Form &other) : GradeToExecute(other.GradeToExecute), GradeToSign(other.GradeToSign), name(other.name){
    this->_signed = other._signed;
}
Form::Form(std::string Name,bool Sign,int gradetoexecute,int gradetosign) : GradeToExecute(gradetoexecute), GradeToSign(gradetosign), name(Name){
     this->_signed = Sign;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

Form &Form::operator=(const Form& other){
    
}

/////////////////////////////////////////////////////////////////////[GETTERS]

std::string Form::getname(){
    return this->name;
}
bool Form::getsign(){
    return this->_signed;
}
int Form::getGradetosign(){
    return this->GradeToSign;
}
int Form::getGradetoexecute(){
    return this->GradeToExecute; 
}

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

void Form::beSigned(Bureaucrat &obj){
    if(obj.getGrade() <= this->GradeToSign)
        this->_signed = true;
    else
        throw GradeTooLowException();
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

Form::~Form(){
}