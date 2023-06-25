/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 09:08:54 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/25 09:46:58 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string name;
    bool _signed;
    const int GradeToSign;
    const int GradeToExecute;

public:
    Form();
    Form(Form &);
    Form(std::string, bool, int, int);
    ~Form();
    Form &operator=(const Form &other);
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

std::ostream &operator<<(std::ostream &out, Form &br);