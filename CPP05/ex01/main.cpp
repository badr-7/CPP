/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:50 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 14:47:28 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Form project("cpp05", 100, 101);
    Bureaucrat melhous("mel-hous", 100);
    Bureaucrat badr("badr", 125);
    project.beSigned(melhous);
    melhous.signForm(project);
    std::cout << project;
    std::cout << melhous;
    badr.signForm(project);
    return 0;
}