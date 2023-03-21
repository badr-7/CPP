/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:02 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 13:54:21 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include"AMateria.hpp"

class Cure : public AMateria 
{
public:
    Cure ();
    Cure (const Cure &other);
    ~Cure ();
    Cure & operator = (const Cure &a);
    AMateria* clone() const;
    void use(ICharacter& target);
};