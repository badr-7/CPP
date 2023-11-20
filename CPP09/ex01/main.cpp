/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:07 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/18 17:14:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    std::stack<int> data;
    if (ac != 2){
        std::cout<< "Error"<<std::endl;
        return 1;        
    }
    std::string s = av[1];
 
    if (!check_line(s))
    {
        std::cout<< "Error"<<std::endl;
        return 1;
    }
    try
    {
        data = store_data(s);
        if (data.size() == 1)
            std::cout<< data.top()<<std::endl;
        else
            std::cout<< "Error"<<std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout<< "Error"<<std::endl;
    }
    
}