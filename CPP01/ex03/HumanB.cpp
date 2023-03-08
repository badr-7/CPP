/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:26:23 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/08 14:40:17 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name):_weapon(NULL){
    setname(name);
};
HumanB::~HumanB(){};
void     HumanB::attack(){
    if (this->_weapon)
        std::cout<<this->_name<<" attacks with their "<<_weapon->getType()<<std::endl;
    else
        std::cout << "attacks with their fist"<<std::endl;
};
void HumanB::setname(std::string name){
    _name = name;
};
void HumanB::setWeapon(Weapon &NewWeapon){
    _weapon = &NewWeapon;
};