/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:07 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/18 09:40:55 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    std::string s = av[1];
    std::stack<int> data;
    (void)ac;
 
    if (!check_line(s))
    {
        std::cout<< "Erorr"<<std::endl;
        return 1;
    }
    std::cout<<s<<std::endl;
    data = store_data(s);
     while(!data.empty())
    {
        std::cout<< "char is :: "<< data.top()<<std::endl;
        data.pop();
    }
    std::cout<<s<<std::endl;
    
}