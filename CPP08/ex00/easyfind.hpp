/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:58:01 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/09 09:04:36 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void easyfind(T &arg, int i)
{
    typename T::iterator a = std::find(arg.begin(), arg.end(), i);
    if (a != arg.end())
    {
        std::cout << "Value fond" << std::endl;
        return;
    }
    throw std::runtime_error("Value not found");
}