/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/27 14:43:31 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat imad("imad", 100);

        Intern form;
        AForm *Azol = form.makeForm("shrubbery creation", "Azol");
        std::cout << Azol->getname() << std::endl;
        Azol->beSigned(imad);
        imad.signForm(*Azol);
        imad.executeForm(*Azol);
        delete Azol;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat abid("abid", 40);

        Intern form;
        AForm *Ayour = form.makeForm("robotomy request", "Ayour");
        std::cout << Ayour->getname() << std::endl;
        Ayour->beSigned(abid);
        abid.signForm(*Ayour);
        abid.executeForm(*Ayour);
        delete Ayour;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat imabid("imabid", 3);

        Intern form;
        AForm *Tafokt = form.makeForm("presidential pardon", "Tafokt");
        std::cout << Tafokt->getname() << std::endl;
        Tafokt->beSigned(imabid);
        imabid.signForm(*Tafokt);
        imabid.executeForm(*Tafokt);
        delete Tafokt;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat hello("hello", 3);

        Intern form;
        AForm *titrit = form.makeForm("Wrong form", "Titirit");
        std::cout << titrit->getname() << std::endl;
        titrit->beSigned(hello);
        hello.signForm(*titrit);
        hello.executeForm(*titrit);
        delete titrit;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}