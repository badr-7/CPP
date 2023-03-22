/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:42:36 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/22 10:29:23 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"


AMateria::AMateria(){

}
AMateria::AMateria(const AMateria &){

}
AMateria::~AMateria(){
    
}
AMateria & AMateria::operator = (const AMateria &){
    return *this;
}

AMateria::AMateria(std::string const & type){
    this->_type = type;
}

std::string const & AMateria::getType() const{
    return _type;
}
void AMateria::use(ICharacter&){
    
};