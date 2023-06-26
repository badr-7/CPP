/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 15:38:53 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/26 17:54:09 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma "once"
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(const Intern &other);
	    Intern &operator=(const Intern &other);
        AForm*   makeFormPresidentialPardonForm(std::string target);
        AForm*   makeFormRobotomyRequestForm(std::string target);
        AForm*   makeFormShrubberyCreationForm(std::string target);
        AForm*   makeForm(std::string name, std::string target);
        typedef AForm* (Intern::*INTERNPTR)(std::string target);
        ~Intern();
};
