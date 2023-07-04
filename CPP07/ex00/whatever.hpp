/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:14:59 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/03 16:23:42 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


template <typename T>
void swap(T &a, T &b)
{
    T i;
    i = a;
    a = b;
    b = i;
}
template <typename T>
T max(T &a, T &b)
{
    if(a > b)
        return a;
    else
        return b;
}
template <typename T>
T min(T &a, T &b)
{
    if(a < b)
        return a;
    else
        return b;
}
