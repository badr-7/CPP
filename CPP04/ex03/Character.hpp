/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:54:41 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 16:29:10 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *matirais[4];
    public:
        Character ();
        Character (const Character &other);
        Character (std::string name);
        std::string const & getName() const;
        ~Character ();
        Character & operator = (const Character &a);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};