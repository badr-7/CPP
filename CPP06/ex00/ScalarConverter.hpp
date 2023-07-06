/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:30:43 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/06 13:20:53 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ScalarConverter
{
    ScalarConverter();

public:
    static ScalarConverter build();
    static void convert(std::string &);
    ~ScalarConverter();
};