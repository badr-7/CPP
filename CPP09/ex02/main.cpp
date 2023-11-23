/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:23:59 by mel-hous          #+#    #+#             */
/*   Updated: 2023/11/22 17:34:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(){
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(48);
    numbers.push_back(3);
    numbers.push_back(95);
    numbers.push_back(5);
    numbers.push_back(20);

    
    numbers = sort(numbers);
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        std::cout << *it << " \n";
    }
}