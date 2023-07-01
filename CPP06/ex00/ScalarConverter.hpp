/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:30:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/01 12:42:22 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(ScalarConverter &);
    ScalarConverter& operator=(const ScalarConverter&);
    static void convert(std::string &);
    ~ScalarConverter();
    // char character;
    // int  
    // float
    // double
};