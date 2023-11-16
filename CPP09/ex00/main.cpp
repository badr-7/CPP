/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:57:56 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/15 17:14:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>

// void CheckWhitespace(std::string &line){
//     int begin = line.find_first_not_of(" \t");
//     // int end = line.find_first_not_of(" \t");
//     if (begin == std::string::npos)
//         return;
//     line = line.substr(begin, 10);
// }

int main(int ac, char **av)
{
    std::map<std::string,float> data_base;
    std::map<std::string,float> input_data;
    if(ac == 2){
    std::string input = av[1];
    std::ifstream filetoread(input); 
    if (!filetoread.is_open())
		throw std::runtime_error("could not open file.");
    try
    {
        data_base = storedata();
        parse(filetoread, data_base);
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    
    }
    else
        std::cout<<"Error: could not open file."<<std::endl;
// std::string str =  "      2022-10-11     ";
//     CheckWhitespace(str);
//     std::cout<<str<<std::endl;
}