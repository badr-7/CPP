/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/25 10:12:11 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
private:
    const std::string name;
    bool _signed;
    const int GradeToSign;
    const int GradeToExecute;

public:
    AForm();
    AForm(AForm &);
    AForm(std::string, bool, int, int);
    ~AForm();
    AForm &operator=(const AForm &other);
    virtual void  executeForm(Form const & form) = 0;
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
    std::string getname();
    bool getsign();
    int getGradetosign();
    int getGradetoexecute();
    void beSigned(Bureaucrat &);
};

std::ostream &operator<<(std::ostream &out, AForm &br);