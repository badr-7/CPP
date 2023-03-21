/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 15:02:18 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice(){

};
Ice::Ice(const Ice &other){
    *this = other;
};
Ice::~Ice(){
    
};
Ice & Ice::operator = (const Ice &other){
   
};
AMateria* Ice::clone() const{
    Ice* other = new Ice();
    return other; 
};
void Ice::use(ICharacter& target){
    std::cout<< "Ice: * shoots an ice bolt at "<< "<name>"<< " *"<< std::endl;
};