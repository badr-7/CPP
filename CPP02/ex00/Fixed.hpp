/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:56:28 by mel-hous          #+#    #+#             */
/*   Updated: 2023/03/09 18:30:47 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class FixedPoint{
    private:
        int  _fixedpoint;
        static const int _fractionalbits = 8;
    public:
        FixedPoint();
        FixedPoint(FixedPoint &i);
        int getRawBits( void ) const;
        void setRawBits(int const raw);
        ~FixedPoint();
};