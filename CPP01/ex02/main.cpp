/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 08:56:20 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 09:02:14 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *ptr = &s;
    std::string &ref = s;
    
    std::cout<<&s<<std::endl;
    std::cout<<ptr<<std::endl;
    std::cout<<&ref<<std::endl;

    
    std::cout<<s<<std::endl;
    std::cout<<*ptr<<std::endl;
    std::cout<<ref<<std::endl;
}