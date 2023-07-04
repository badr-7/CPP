/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:40:06 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/04 10:01:35 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    float intValue = 10.01;
    int charValue = static_cast<int>(intValue);

    std::cout << "Int Value: " << intValue << std::endl;
    std::cout << "Char Value: " << charValue << std::endl;

    return 0;
}