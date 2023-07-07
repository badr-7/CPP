/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:33:23 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/07 10:26:30 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(int, char**)
{
    Array<char> str(12);
    char *s = strdup("hello world");
    Array<int> tab(12);
    for (int i = 0; i < 12; i++)
    {
        str[i] = s[i];
        tab[i] = i;
    }
    for (int i = 0; i < 12; i++)
    {
        std::cout<<"str: "<< str[i] << "   tab: " << tab[i] << std::endl;
    }
    try
    {
        std::cout<<"str: "<< str[15] << "   tab: " << tab[15] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout<<"str: "<< str[10] << "   tab: " << tab[-1] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    
    return 0;
}