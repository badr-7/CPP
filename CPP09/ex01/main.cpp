/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:07 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/17 11:23:32 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    std::string s = av[1];
    std::stack<char> data;
    (void)ac;
    // try
    // {
    //     check_line(s);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    if (!check_line(s))
    {
        std::cout<< "Erorr"<<std::endl;
        return 1;
    }
    data = store_data(s);
     while(!data.empty())
    {
        std::cout<< "char is :: "<< data.top()<<std::endl;
        data.pop();
    }
    
}