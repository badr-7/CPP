/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:51:24 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/21 13:57:52 by mel-hous         ###   ########.fr       */
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
   std::cout<< "Ice: * shoots an ice bolt at "<< "<name>"<< " *"<< std::endl;
};