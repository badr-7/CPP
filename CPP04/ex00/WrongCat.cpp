/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 08:53:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/17 11:54:17 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout<< "WrongCat Default constructor called"<<std::endl;
    type = "WorngCat";
};
WrongCat::WrongCat(const WrongCat &other){
    std::cout<< "WrongCat Copy constructor called"<<std::endl;
    *this = other; 
};
WrongCat::~WrongCat(){
    std::cout<<"WrongCat Destructor called"<<std::endl;
};
WrongCat & WrongCat::operator = (const WrongCat &other){
    this->type = other.type;
    return *this;
};

std::string WrongCat::getType(){
    return this->type;
};
void WrongCat::makeSound(){
    std::cout<<"WrongCat Sound"<<std::endl;
};