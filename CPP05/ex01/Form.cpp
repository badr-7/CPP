/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:09:02 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/21 09:51:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : GradeToExecute(150), GradeToSign(150), name("default"){
    this->_signed = false;
};
Form::Form(Form &other) : GradeToExecute(other.GradeToExecute), GradeToSign(other.GradeToSign), name(other.name){
    this->_signed = other._signed;
};
Form::Form(std::string Name,bool Sign,int gradetoexecute,int gradetosign) : GradeToExecute(gradetoexecute), GradeToSign(gradetosign), name(Name){
     this->_signed = Sign;
};
Form::~Form(){

};
Form &Form::operator=(const Form& other){
    
};