/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:27 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 15:01:19 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice ();
    Ice (const Ice &other);
    ~Ice ();
    Ice & operator = (const Ice &a);
    AMateria* clone() const;
    void use(ICharacter& target);
};