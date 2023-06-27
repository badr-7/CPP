/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/27 09:50:35 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
	try
    {
        AForm *form = new ShrubberyCreationForm("ShrubberyCreationForm");
        Bureaucrat bureaucrat("imad", 40);
        form->beSigned(bureaucrat);
        bureaucrat.signForm(*form);
        bureaucrat.executeForm(*form);
        delete form;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	std::cout << std::endl;
    
    try
    {
        AForm *form1 = new RobotomyRequestForm("RRobotomyrequest");
        Bureaucrat bureaucrat1("abid", 45);
        form1->beSigned(bureaucrat1);
        bureaucrat1.signForm(*form1);
        bureaucrat1.executeForm(*form1);
        delete form1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
	std::cout << std::endl;
    
    try
    {
        AForm *form2 = new PresidentialPardonForm("PresidentialPardon");
        Bureaucrat bureaucrat2("imabid", 5);
        form2->beSigned(bureaucrat2);
        bureaucrat2.signForm(*form2);
        bureaucrat2.executeForm(*form2);
        delete form2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}