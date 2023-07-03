/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:30:40 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/03 08:30:56 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <stdbool.h>
#include <sstream>
#include <iomanip>
#include <cmath>

/////////////////////////////////////////////////////////////////////[CONSTRUCTORS]

ScalarConverter::ScalarConverter()
{
}
ScalarConverter::ScalarConverter(ScalarConverter &other)
{
    *this = other;
}

/////////////////////////////////////////////////////////////////////[OVERLOAD_OP]

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

/////////////////////////////////////////////////////////////////////[GETTERS]

/////////////////////////////////////////////////////////////////////[FUNCTIONS]

bool int_check(std::string &literal)
{
    if (literal.length() > 11 || (literal.length() == 11 && !std::strchr("+-", literal[0])))
        return (false);
    int i = 0;
    if (std::strchr("+-", literal[0]))
    {
        i++;
        if (i == static_cast<int>(literal.length()))
            return (false);
    }
    for (; i < static_cast<int>(literal.length()); i++)
    {
        if (!std::isdigit(literal[i]))
            return false;
    }
    return true;
}
bool char_check(std::string &literal)
{
    if (literal.length() != 1 || std::isdigit(literal[0]))
        return (false);
    return true;
}
bool float_check(std::string &literal)
{
    int i = 0;
    int f = 0;
    int DecimalPoint = 0;
    int Decimal = 0;
    if(literal.compare(i,4,"nanf") == 0 || literal.compare(i,5,"-inff") == 0 || literal.compare(i,5,"+inff") == 0)
        return(true);
    if (strchr("+-", literal[0]))
    {
        i++;
        if (i == static_cast<int>(literal.length()))
            return (false);
    }
    for (; i < static_cast<int>(literal.length()); i++)
    {
        if (std::isdigit(literal[i]))
        {
            if (DecimalPoint == 0)
                Decimal = 1;
            continue;
        }
        else if (i < static_cast<int>(literal.length() - 1) && literal[i] == '.' && !DecimalPoint && Decimal == 1)
            DecimalPoint = 1;
        else if (literal[i] == 'f' && !f && i == static_cast<int>(literal.length() - 1))
            f = 1;
        else
            return (false);
    }
    return (f == 1 && DecimalPoint == 1);
}

bool double_check(std::string &literal)
{
    int i = 0;
    int DecimalPoint = 0;
    int Decimal = 0;
    if(literal.compare(i,4,"nan") == 0 || literal.compare(i,4,"-inf") == 0 || literal.compare(i,4,"+inf") == 0)
        return(true);
    if (strchr("+-", literal[0]))
    {
        i++;
        if (i == static_cast<int>(literal.length()))
            return (false);
    }
    for (; i < static_cast<int>(literal.length()); i++)
    {
        if (std::isdigit(literal[i]))
        {
            if (DecimalPoint == 0)
                Decimal = 1;
            continue;
        }
        else if (i < static_cast<int>(literal.length() - 1) && literal[i] == '.' && !DecimalPoint && Decimal == 1)
            DecimalPoint = 1;
        else
            return (false);
    }
    return ( DecimalPoint == 1);
}

double extract_number(std::string &s)
{
    std::istringstream iss(s);
    double number;
    iss >> number;
    return number;
}

void ScalarConverter::convert(std::string &literal)
{
    if (char_check(literal))
    {
        char c = literal[0];
        if (c < 0 || c > 127)
		    std::cout << "impossible" << std::endl;
	    else if (c < 32 || c == 127)
		    std::cout << "Non displayable" << std::endl;
        else
            std::cout << "char: '" << c << "'" << std::endl;
	    std::cout << "int: " << static_cast<int>(c) << std::endl;
	    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
    }
    else if(int_check(literal))
    {
        int i = extract_number(literal);
        if (i < 0 || i > 127)
		    std::cout << "char: impossible" << std::endl;
	    else if (i < 32 || i == 127)
		    std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '"  << static_cast<char>(i) << "'" << std::endl;
	    std::cout << "int: " << i << std::endl;
	    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    }
    else if(double_check(literal))
    {
        double i = stod(literal);
        std::cout << std::fixed << std::setprecision(1);
        if (i < 0 || i > 127 || std::isnan(i))
		    std::cout << "char: impossible" << std::endl;
	    else if (i < 32 || i == 127)
		    std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '"  << static_cast<char>(i) << "'" << std::endl;
        if(std::isnan(i))
            std::cout << "int: impossible" << std::endl;
        else if (std::isinf(i) && i > 0)
            std::cout << "int: 2147483647" << std::endl;
        else
    	    std::cout << "int: " << static_cast<int>(i) << std::endl;
	    std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	    std::cout << "double: " << i << std::endl;
    }
    else if(float_check(literal))
    {
        float i = stof(literal);
        std::cout << std::fixed << std::setprecision(1);
        if (i < 0 || i > 127 || std::isnan(i))
		    std::cout << "char: impossible" << std::endl;
	    else if (i < 32 || i == 127)
		    std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '"  << static_cast<char>(i) << "'" << std::endl;
        if(std::isnan(i))
            std::cout << "int: impossible" << std::endl;
        else if (std::isinf(i) && i > 0)
            std::cout << "int: 2147483647" << std::endl;
        else
    	    std::cout << "int: " << static_cast<int>(i) << std::endl;
	    std::cout << "float: " << i << "f" << std::endl;
	    std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
    else {
        std::cout<<"YOU MUST ENTER ONE OF THIS SCALAR TYPES: \n-char\n -int\n -float\n -double"<<std::endl;
    }
}

/////////////////////////////////////////////////////////////////////[DESTRUCTORS]

ScalarConverter::~ScalarConverter()
{
}
