/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 14:40:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/06 13:21:10 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    std::string s = argv[1];
    ScalarConverter obj1 = ScalarConverter::build();
    ScalarConverter::convert(s);
    return 0;
}