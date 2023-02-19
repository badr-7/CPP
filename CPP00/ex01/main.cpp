/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:00:45 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/19 17:05:38 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"



int main()
{
    PhoneBook a;
    std::string input;

    std::cout<<std::endl<<"██████╗░██╗░░██╗░█████╗░███╗░░██╗███████╗██████╗░░█████╗░░█████╗░██╗░░██╗"<<std::endl
                     <<"██╔══██╗██║░░██║██╔══██╗████╗░██║██╔════╝██╔══██╗██╔══██╗██╔══██╗██║░██╔╝"<<std::endl
                     <<"██████╔╝███████║██║░░██║██╔██╗██║█████╗░░██████╦╝██║░░██║██║░░██║█████═╝░"<<std::endl
                     <<"██╔═══╝░██╔══██║██║░░██║██║╚████║██╔══╝░░██╔══██╗██║░░██║██║░░██║██╔═██╗░"<<std::endl
                     <<"██║░░░░░██║░░██║╚█████╔╝██║░╚███║███████╗██████╦╝╚█████╔╝╚█████╔╝██║░╚██╗"<<std::endl
                     <<"╚═╝░░░░░╚═╝░░╚═╝░╚════╝░╚═╝░░╚══╝╚══════╝╚═════╝░░╚════╝░░╚════╝░╚═╝░░╚═╝"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"\t\t  c̲o̲m̲m̲a̲n̲d̲s̲ t̲h̲a̲t̲ c̲a̲n̲ b̲e̲ u̲s̲e̲"<<std::endl;
    std::cout<<"\n• ADD: save a new contact\n• SEARCH: display a specific contact\n• EXIT: exit programme"<<std::endl;
    while (1)
    {
        std::cout<<"->";
        if(!std::getline(std::cin,input))
            break;
        if(input == "ADD")
            a.Add();
        else if(input == "EXIT")
            break;
        else if(input == "SEARCH")
            a.Search();
    }
    return(0);
}