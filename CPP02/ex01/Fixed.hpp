/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:44:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/11 18:02:35 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

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
        ~Fixed();
        
};

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed);
