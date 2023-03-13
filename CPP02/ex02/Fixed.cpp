/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:39:48 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/13 13:46:43 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Fixed.hpp"

        Fixed::Fixed(){
            this->_fixedpoint = 0;
        };
        Fixed::Fixed(const Fixed &other){
            this->_fixedpoint = other.getRawBits();
        };
        Fixed::Fixed(const int i){
            this->_fixedpoint = i << _fractionalbits;
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
        bool Fixed::operator>(const Fixed &obj2){
            return(this->_fixedpoint > obj2.getRawBits());
        };
        bool Fixed::operator<(const Fixed &obj2){
             return(this->_fixedpoint < obj2.getRawBits());
        };
        bool Fixed::operator!=(const Fixed &obj2){
            return(this->_fixedpoint != obj2.getRawBits());
        };
        bool Fixed::operator==(const Fixed &obj2){
            return(this->_fixedpoint == obj2.getRawBits());
        };
        bool Fixed::operator>=(const Fixed &obj2){
            return(this->_fixedpoint >= obj2.getRawBits());
        };
        bool Fixed::operator<=(const Fixed &obj2){
            return(this->_fixedpoint <= obj2.getRawBits());
        };
        Fixed Fixed::operator+(const Fixed &obj2){
            Fixed add(this->toFloat() + obj2.toFloat());
            return(add);
        };
        Fixed Fixed::operator-(const Fixed &obj2){
            Fixed min(this->_fixedpoint - obj2.toFloat());
            return(min);
        };
        Fixed Fixed::operator*(const Fixed &obj2){
            Fixed tim(this->toFloat() * obj2.toFloat());
            return(tim);
        };
        Fixed Fixed::operator/(const Fixed &obj2){
            Fixed div(this->_fixedpoint / obj2.toFloat());
            return(div);
        };
        Fixed& Fixed::operator++(){
            ++_fixedpoint;
            return(*this);
        };
        Fixed& Fixed::operator--(){
            --_fixedpoint;
            return(*this);
        };
        Fixed Fixed::operator++(int){
            Fixed temp(*this);
            _fixedpoint++;
            return(temp);
        };
        Fixed Fixed::operator--(int){
            Fixed temp(*this);
            _fixedpoint--;
            return(temp);
        };
        Fixed::~Fixed(){
            
        };
        std::ostream&   operator<<(std::ostream &out, const Fixed &fixed)
        {
            out << fixed.toFloat();
            return out;
        };
        Fixed& Fixed::min(Fixed &obj1,Fixed &obj2){
            if(obj1 > obj2)
                return(obj2);
            else
                return(obj1);
        };
        const Fixed& Fixed::max(Fixed &obj1,const Fixed &obj2){
            if(obj1 > obj2)
                return(obj1);
            else
                return(obj2);
        };