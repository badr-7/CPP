/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:39:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/12 13:45:26 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

        Fixed::Fixed(){
            
        };
        Fixed::Fixed(const Fixed &other){
            this->_fixedpoint = other.getRawBits();
        };
        Fixed::Fixed::Fixed(const int i){
            
        };
        Fixed::Fixed(const float f){
            
        };
        int Fixed::getRawBits( void ) const{
            return(this->_fixedpoint);
        };
        float Fixed::toFloat( void ) const{
            
        };
        int Fixed::toInt( void ) const{
            
        };
        void setRawBits(int const raw);
        Fixed& Fixed::operator=(const Fixed &obj2){
            
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