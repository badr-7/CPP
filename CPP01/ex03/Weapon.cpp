/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:29:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 11:33:12 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"



Weapon::Weapon(std::string name){
    setType(name);
};
const   std::string&    Weapon::getType() const{
    return (_weapon);
};
void     Weapon::setType(std::string name){
    _weapon = name;
};