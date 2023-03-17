/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:03:50 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 09:18:48 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include<iostream>

class Brain
{
public:
    Brain ();
    Brain (const Brain &other);
    ~Brain ();
    Brain & operator = (const Brain &a);
};