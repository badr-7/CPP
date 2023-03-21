/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:53:36 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 16:29:52 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character(){
    for (int i = 0; i < 4; i++)
        matirais[i] = NULL;
}
Character::Character(const Character &other){
    for (int i = 0; i < 4; i++)
        matirais[i] = NULL;
    this->_name = other._name;
    *this = other;
}
Character::~Character(){
    for (int i = 0; i < 4; i++)
        delete matirais[i];
}
Character & Character::operator = (const Character &other){
    for (int i = 0; i < 4; i++)
    {
        delete matirais[i];
        if(other.matirais[i])
            matirais[i] = other.matirais[i]->clone();
    }
    return *this;
}

 void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (matirais[i] == NULL)
        {
            matirais[i] = m;
            break;
        }
    }    
 }

 void Character::unequip(int idx){
    if(idx >= 0 && idx < 4)
        matirais[idx] = NULL;
 }

 void Character::use(int idx, ICharacter& target){
    if(idx >= 0 && idx < 4)
    {
        if(matirais[idx])
            matirais[idx]->use(target);
    }
 }

Character::Character (std::string name){
    for (int i = 0; i < 4; i++)
        matirais[i] = NULL;
    _name = name;
}
std::string const & Character::getName() const{
    return(_name);
}