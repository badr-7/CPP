/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/25 13:39:44 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"


class AForm{
    private :
        const std::string name;
        bool _signed;
        const int GradeToSign;
        const int GradeToExecute;
    public :
        AForm();
        AForm(AForm &);
        AForm(std::string ,bool ,int ,int);
        ~AForm(){};
        virtual AForm &operator=(const AForm& other) = 0;
        class GradeTooHighException : public std::exception{
            const char* what() const throw(){
            return ("Grade To High");
            }
        };
        class GradeTooLowException : public std::exception{
            const char* what() const throw(){
                return ("Grade To Low");
            }
        };
        virtual std::string getname() = 0;
        virtual bool getsign() = 0;
        virtual int getGradetosign() = 0;
        virtual int getGradetoexecute() = 0;
        virtual void beSigned(Bureaucrat &) = 0;
};