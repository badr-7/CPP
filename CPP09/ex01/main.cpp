/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:24:07 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/16 12:55:36 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    std::string s = av[1];
    // float c;
    // std::istringstream ss(s);
    // ss >> c;
    // if(ss.fail())
    //     std::cout<<"hi\n";
    // std::cout<<c<<std::endl;
try
{
    check_syn(s);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

}