/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:37 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 15:18:05 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main()
{
	PresidentialPardonForm f1("staff");
    RobotomyRequestForm f2("mac");
    ShrubberyCreationForm f3("forest");
    Bureaucrat badr("badr", 140);
    try
    {
        std::cout << badr;
        std::cout << f3;
        badr.signForm(f3);
        f3.execute(badr);
        std::cout << f2;
        badr.signForm(f2);
        f2.execute(badr);
        std::cout << f1;
        badr.signForm(f1);
        f1.execute(badr);
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
        std::cout << f3;
        badr.signForm(f3);
        f3.execute(badr);
        std::cout << f2;
        badr.signForm(f2);
        f2.execute(badr);
        std::cout << f1;
        badr.signForm(f1);
        f1.execute(badr);
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
        std::cout << f3;
        badr.signForm(f3);
        f3.execute(badr);
        std::cout << f2;
        badr.signForm(f2);
        f2.execute(badr);
        std::cout << f1;
        badr.signForm(f1);
        f1.execute(badr);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return (0);
}