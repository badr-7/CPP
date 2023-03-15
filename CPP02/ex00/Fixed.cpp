/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:04:26 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/15 13:14:36 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

FixedPoint::FixedPoint(){
    std::cout<< "Default constructor called"<<std::endl;
    _fixedpoint = 0;
    };
FixedPoint::FixedPoint(FixedPoint &i){
    std::cout<< "Copy constructor called"<<std::endl;
    this->_fixedpoint = i.getRawBits();
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
FixedPoint& FixedPoint::operator=(FixedPoint &obj2)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->_fixedpoint = obj2.getRawBits();
    return *this;
};