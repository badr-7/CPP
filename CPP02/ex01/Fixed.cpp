/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:44:23 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/11 18:07:37 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout<< "Default constructor called"<<std::endl;
    _fixedpoint = 0;
};
Fixed::Fixed(const Fixed &other){
    std::cout<< "copy constructor called"<<std::endl;
    *this = other;
};
Fixed::Fixed(const int i){
    std::cout<< "Int constructor called"<<std::endl;
    _fixedpoint = i << _fractionalbits;
};
Fixed::Fixed(const float f){
    std::cout<< "Float constructor called"<<std::endl;
    _fixedpoint = roundf(f * 256);
};
int Fixed::getRawBits( void ) const{
    return _fixedpoint;
};
void Fixed::setRawBits(int const raw){
    _fixedpoint = raw;
};
Fixed::~Fixed(){
    std::cout<<"Destructor called"<<std::endl;
};
int Fixed::toInt( void ) const{
    return(_fixedpoint / 256);
};
float Fixed::toFloat() const{
    return((float)_fixedpoint / 256);
};
Fixed &Fixed::operator=(const Fixed &obj2)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->_fixedpoint = obj2.getRawBits();
    return *this;
};
std::ostream&   operator<<(std::ostream &out, const Fixed &fixed)
 {
    out << fixed.toFloat();
    return out;
};
