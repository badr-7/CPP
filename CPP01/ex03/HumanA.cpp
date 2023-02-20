/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:14:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/20 14:36:00 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon){
    setname(name);
    // _weapon = weapon;
};
HumanA::~HumanA(){
    
};
void     HumanA::attack(){
    std::cout<<_name<<" attacks with their "<<_weapon.getType()<<std::endl;
};
void HumanA::setname(std::string name){
    _name = name;
};