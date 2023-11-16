/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:57:56 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/16 10:18:56 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// void CheckWhitespace(std::string &line){

int main(int ac, char **av)
{
    std::map<std::string,float> data_base;
    std::map<std::string,float> input_data;
    if(ac == 2){
        std::string input = av[1];
        std::ifstream filetoread(input); 
        if (!filetoread.is_open())
	    	throw std::runtime_error("could not open file.");
        data_base = storedata();
        process(filetoread, data_base);
    }
    else
       throw std::runtime_error("Error: could not open file.");
    return 0;
}
