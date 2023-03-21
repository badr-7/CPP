/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 15:58:36 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice(){
     _type = "ice";
};
Ice::Ice(const Ice &other){
    _type = "ice";
    *this = other;
};
Ice::~Ice(){
    
};
Ice & Ice::operator = (const Ice &){
   return *this;
};
AMateria* Ice::clone() const{
    Ice* other = new Ice();
    return other; 
};
void Ice::use(ICharacter& target){
    std::cout<< "* shoots an ice bolt at "<< target.getName() << " *"<< std::endl;
};