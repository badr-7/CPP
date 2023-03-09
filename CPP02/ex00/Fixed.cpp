/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:04:26 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/09 18:32:08 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

FixedPoint::FixedPoint(){
    _fixedpoint = 0;
    std::cout<< "Default constructor called"<<std::endl;
    };
FixedPoint::FixedPoint(FixedPoint &i){
    this->_fixedpoint = i.getRawBits();
    std::cout<< "Copy constructor called"<<std::endl;
    };
FixedPoint::~FixedPoint(){
    std::cout<<"Destructor called"<<std::endl;
};

int FixedPoint::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedpoint;
};
void FixedPoint::setRawBits(int const raw ){
    this->_fixedpoint = raw;
};
