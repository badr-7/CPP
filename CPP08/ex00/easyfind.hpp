/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:58:01 by mel-hous          #+#    #+#             */
/*   Updated: 2023/10/24 10:17:01 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void easyfind(T &container, int i)
{
    typename T::iterator a = std::find(container.begin(), container.end(), i);
    if (a != container.end())
    {
        std::cout << "Value fond" << std::endl;
        return;
    }
    throw std::runtime_error("Value not found");
}