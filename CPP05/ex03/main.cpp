/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 15:55:04 by mel-hous         ###   ########.fr       */
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
    Intern someRandomIntern;
    AForm* rrf[3];
    rrf[0] = someRandomIntern.makeForm("Presidential Pardon", "staff");
    if(!rrf[0])
        return 0;
    rrf[1] = someRandomIntern.makeForm("Robotomy Request", "mac");
    if(!rrf[1])
    {
        delete rrf[0];
        return 0;
    }
    rrf[2] = someRandomIntern.makeForm("Shrubbery Creation", "forest");
    if(!rrf[2])
    {
        delete rrf[0];
        delete rrf[1];
        return 0;
    }

    Bureaucrat badr("badr", 140);
    try
    {
        std::cout << badr;
        std::cout << *rrf[2];
        badr.signForm(*rrf[2]);
        rrf[2]->execute(badr);
        std::cout << *rrf[1];
        badr.signForm(*rrf[1]);
        rrf[1]->execute(badr);
        std::cout << *rrf[0];
        badr.signForm(*rrf[0]);
        rrf[0]->execute(badr);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "//////////////////////////////////////////////////////////////"<<std::endl;
    badr = Bureaucrat("", 70);
    try
    {
        std::cout << badr;
        std::cout << *rrf[2];
        badr.signForm(*rrf[2]);
        rrf[2]->execute(badr);
        std::cout << *rrf[1];
        badr.signForm(*rrf[1]);
        rrf[1]->execute(badr);
        std::cout << *rrf[0];
        badr.signForm(*rrf[0]);
        rrf[0]->execute(badr);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout<< "//////////////////////////////////////////////////////////////"<<std::endl;
    badr = Bureaucrat("", 1);
    try
    {
        std::cout << badr;
        std::cout << *rrf[2];
        badr.signForm(*rrf[2]);
        rrf[2]->execute(badr);
        std::cout << *rrf[1];
        badr.signForm(*rrf[1]);
        rrf[1]->execute(badr);
        std::cout << *rrf[0];
        badr.signForm(*rrf[0]);
        rrf[0]->execute(badr);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    for(int i=0; i < 3 ; i++)
        delete rrf[i];
    
    return (0);
}