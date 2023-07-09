/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:58:04 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/09 09:05:16 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    try
    {
        easyfind(numbers, 3);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        easyfind(numbers, 6);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}