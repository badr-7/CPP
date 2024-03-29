/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:34 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/27 09:45:44 by mel-hous         ###   ########.fr       */
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
    Bureaucrat(Bureaucrat &);
    Bureaucrat(std::string, int);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
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
    void signForm(AForm &);
    void    executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat &Obj);