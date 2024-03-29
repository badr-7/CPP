/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 10:29:51 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/27 09:47:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
    std::string Target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string);
        ShrubberyCreationForm(ShrubberyCreationForm&);
        void   execute(Bureaucrat const &) const;
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        ~ShrubberyCreationForm();
};