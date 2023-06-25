/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:53 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/24 13:24:27 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat
{
private:
    std::string const name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(Bureaucrat &);
    Bureaucrat(std::string, int);
    ~Bureaucrat();
    std::string getName();
    int getGrade();
    Bureaucrat &operator=(const Bureaucrat &other);
    void IncrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &out, Bureaucrat &Obj);