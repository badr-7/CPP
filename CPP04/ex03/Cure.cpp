/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:12 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 14:03:14 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure(){
    _type = "cure";
};
Cure::Cure(const Cure &other){
    _type = "cure";
    *this = other;
};
Cure::~Cure(){
    
};
Cure & Cure::operator = (const Cure &other){
    
};

AMateria* Cure::clone() const{
    Cure* other = new Cure();
    return other; 
};
void Cure::use(ICharacter& target){
    std::cout<< "Cure: * heals "<< "<name>"<< "'s wounds *"<<std::endl;
};