/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:34 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/23 11:16:34 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class AForm;

class Bureaucrat
{
private:
    std::string const name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(Bureaucrat&);
    Bureaucrat(std::string, int);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    Bureaucrat& operator=(const Bureaucrat& other);
    void IncrementGrade();
    void decrementGrade();
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
    void signForm(AForm &);
};