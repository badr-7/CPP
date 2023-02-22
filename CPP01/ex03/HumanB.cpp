/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:26:23 by mel-hous          #+#    #+#             */
/*   Updated: 2023/02/21 08:07:11 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    setname(name);
};
HumanB::~HumanB(){
    
};
void     HumanB::attack(){
    if (_weapon)
        std::cout<<_name<<" attacks with their "<<_weapon->getType()<<std::endl;
    else
        std::cout << "KI GHANDIR LIHA"<<std::endl;
};
void HumanB::setname(std::string name){
    _name = name;
};
void HumanB::setWeapon(Weapon NewWewpen){
    _weapon = &NewWewpen;
};