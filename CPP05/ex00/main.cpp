/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:50 by mel-hous          #+#    #+#             */
/*   Updated: 2023/06/28 14:28:13 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

    try
    {
        Bureaucrat obj("aaaa", 150);
        std::cout << obj;
        Bureaucrat("badr", 0);
    }
    catch (std::exception &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout << Bureaucrat("melhous",1);
    }
}