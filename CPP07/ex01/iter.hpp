/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:06:12 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/07 11:15:02 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void iter(T *a, int len, void (*f)(T &c))
{
    for (int i = 0; i < len; i++)
        f(a[i]);
}

template <typename T>
void iter(T *a, int len, void (*f)(const T &c))
{
    for (int i = 0; i < len; i++)
        f(a[i]);
}