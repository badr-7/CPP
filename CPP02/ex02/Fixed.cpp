/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:39:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/12 13:59:55 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

        Fixed::Fixed(){
            
        };
        Fixed::Fixed(const Fixed &other){
            this->_fixedpoint = other.getRawBits();
        };
        Fixed::Fixed(const int i){
            this->_fixedpoint = i << 1;
        };
        Fixed::Fixed(const float f){
            this->_fixedpoint = roundf(f * 256);
        };
        int Fixed::getRawBits( void ) const{
            return(this->_fixedpoint);
        };
        float Fixed::toFloat( void ) const{
            return((float)_fixedpoint / 256);
        };
        int Fixed::toInt( void ) const{
            return(_fixedpoint / 256);
        };
        void setRawBits(int const raw);
        Fixed& Fixed::operator=(const Fixed &obj2){
            this->_fixedpoint = obj2.getRawBits();
            return(*this);
        };
        Fixed& Fixed::operator>(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator<(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator!=(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator==(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator>=(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator<=(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator+(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator-(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator*(const Fixed &obj2){
            
        };
        Fixed& Fixed::operator/(const Fixed &obj2){
            
        };
        Fixed::~Fixed(){
            
        };