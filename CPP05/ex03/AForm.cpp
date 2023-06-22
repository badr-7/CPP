/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/25 09:48:00 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "AForm.hpp"

// AForm::AForm() : GradeToExecute(150), GradeToSign(150), name("default"){
//     this->_signed = false;
// }
// AForm::AForm(AForm &other) : GradeToExecute(other.GradeToExecute), GradeToSign(other.GradeToSign), name(other.name){
//     this->_signed = other._signed;
// }
// AForm::AForm(std::string Name,bool Sign,int gradetoexecute,int gradetosign) : GradeToExecute(gradetoexecute), GradeToSign(gradetosign), name(Name){
//      this->_signed = Sign;
// }
// AForm::~AForm(){

// }
// AForm &AForm::operator=(const AForm& other){
    
// } 
// std::string AForm::getname(){
//     return this->name;
// }
// bool AForm::getsign(){
//     return this->_signed;
// }
// int AForm::getGradetosign(){
//     return this->GradeToSign;
// }
// int AForm::getGradetoexecute(){
//     return this->GradeToExecute; 
// }

// void AForm::beSigned(Bureaucrat &obj){
//     if(obj.getGrade() <= this->GradeToSign)
//         this->_signed = true;
//     else
//         throw GradeTooLowException();
// }