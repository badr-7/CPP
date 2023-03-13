/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:36:32 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/13 13:31:49 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <stdbool.h>

class Fixed{
    private:
        int  _fixedpoint;
        static const int _fractionalbits = 8;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int i);
        Fixed(const float f);
        int getRawBits( void ) const;
        float toFloat( void ) const;
        int toInt( void ) const;
        void setRawBits(int const raw);
        Fixed& operator=(const Fixed &obj2);
        bool operator>(const Fixed &obj2);
        bool operator<(const Fixed &obj2);
        bool operator!=(const Fixed &obj2);
        bool operator==(const Fixed &obj2);
        bool operator>=(const Fixed &obj2);
        bool operator<=(const Fixed &obj2);
        Fixed operator+(const Fixed &obj2);
        Fixed operator-(const Fixed &obj2);
        Fixed operator*(const Fixed &obj2);
        Fixed operator/(const Fixed &obj2);
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed& min(Fixed &obj1,Fixed &obj2);
        const static Fixed& max(Fixed &obj1,const Fixed &obj2);
        ~Fixed();
        
};

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed);
