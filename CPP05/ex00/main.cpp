/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:23:50 by mel-hous          #+#    #+#             */
/*   Updated: 2023/05/23 09:44:50 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat obj("aaaa", 80);
    std::cout << obj;

    try{
        Bureaucrat("badr",0);
    }
    catch(std::exception &ex){
        std::cout<<ex.what()<<std::endl;
    }
}