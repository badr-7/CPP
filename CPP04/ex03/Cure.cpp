/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:12 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 15:58:31 by mel-hous         ###   ########.fr       */
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
Cure & Cure::operator = (const Cure &){
    return *this;
};

AMateria* Cure::clone() const{
    Cure* other = new Cure();
    return other; 
};
void Cure::use(ICharacter& target){
    std::cout<< "* heals "<< target.getName()<< "'s wounds *"<<std::endl;
};