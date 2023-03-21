/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:42:33 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 15:58:09 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include "ICharacter.hpp"

// class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria ();
        AMateria (const AMateria &);
        AMateria(std::string const & type);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& ){};
        virtual ~AMateria ();
        AMateria & operator = (const AMateria &a);
};