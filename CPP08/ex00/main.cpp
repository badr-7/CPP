/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:58:04 by mel-hous          #+#    #+#             */
/*   Updated: 2023/10/24 10:22:41 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <algorithm>
#include <vector>
#include <deque>

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

    std::deque<int> d;
    d.push_front(13);
    d.push_front(7);
    d.push_front(9);
    try
    {
        easyfind(d, 7);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}