/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-hous <mel-hous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:06:22 by mel-hous          #+#    #+#             */
/*   Updated: 2023/07/04 07:27:28 by mel-hous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T > 
void print( T & x ) 
{
    if (toupper(x) >= 32 && toupper(x) <= 126)
        std::cout << (char)toupper(x) << " ";
    else
        std::cout << x << " ";
}

int main()
{
    int i[] = {1,3,3,7};
    char str[] = "mel-hous";
    
    iter(i, 4, print);
    std::cout << std::endl;
    iter(str, 8, print);

    return 0;
}