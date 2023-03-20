/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:03:50 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 15:00:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include<iostream>
#include "Brain.hpp"

class Brain
{
    protected :
        std::string ideas[100];
public:
    Brain ();
    Brain (const Brain &other);
    ~Brain ();
    Brain & operator = (const Brain &a);
};