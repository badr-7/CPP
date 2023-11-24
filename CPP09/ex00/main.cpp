/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:57:56 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/23 22:55:43 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

// void CheckWhitespace(std::string &line){

int main(int ac, char **av)
{
    std::map<std::string,float> data_base;
    std::map<std::string,float> input_data;
    if(ac == 2){
        std::ifstream filetoread(av[1]);
        if (!filetoread.is_open()){
	    	std::cout<<"Error: could not open file.\n";
            return 1;
        }
        data_base = storedata();
        process(filetoread, data_base);
    }
    else
       std::cout<<"Error: could not open file.\n";
    return 0;
}
